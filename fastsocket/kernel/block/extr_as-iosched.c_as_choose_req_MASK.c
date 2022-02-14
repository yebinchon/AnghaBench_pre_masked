
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct as_data {scalar_t__* last_sector; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;

__attribute__((used)) static struct request *
FUNC_3(struct as_data *VAR_2, struct request *VAR_3, struct request *VAR_4)
{
 int VAR_5;
 sector_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11=0, VAR_12=0;
 const sector_t VAR_13 = VAR_1;

 if (VAR_3 == ((void*)0) || VAR_3 == VAR_4)
  return VAR_4;
 if (VAR_4 == ((void*)0))
  return VAR_3;

 VAR_5 = FUNC_2(VAR_3);

 VAR_6 = VAR_2->last_sector[VAR_5];
 VAR_7 = FUNC_1(VAR_3);
 VAR_8 = FUNC_1(VAR_4);

 FUNC_0(VAR_5 != FUNC_2(VAR_4));






 if (VAR_7 >= VAR_6)
  VAR_9 = VAR_7 - VAR_6;
 else if (VAR_7+VAR_13 >= VAR_6)
  VAR_9 = (VAR_6 - VAR_7)*VAR_0;
 else {
  VAR_11 = 1;
  VAR_9 = 0;
 }

 if (VAR_8 >= VAR_6)
  VAR_10 = VAR_8 - VAR_6;
 else if (VAR_8+VAR_13 >= VAR_6)
  VAR_10 = (VAR_6 - VAR_8)*VAR_0;
 else {
  VAR_12 = 1;
  VAR_10 = 0;
 }


 if (!VAR_11 && VAR_12)
  return VAR_3;
 else if (!VAR_12 && VAR_11)
  return VAR_4;
 else if (VAR_11 && VAR_12) {

  if (VAR_7 <= VAR_8)
   return VAR_3;
  else
   return VAR_4;
 }


 if (VAR_9 < VAR_10)
  return VAR_3;
 else if (VAR_10 < VAR_9)
  return VAR_4;
 else {
  if (VAR_7 >= VAR_8)
   return VAR_3;
  else
   return VAR_4;
 }
}
