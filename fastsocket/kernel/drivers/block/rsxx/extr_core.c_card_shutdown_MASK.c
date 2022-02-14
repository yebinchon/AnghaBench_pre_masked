
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rsxx_cardinfo*,unsigned int*) ;
 int FUNC_2 (struct rsxx_cardinfo*,int ) ;

__attribute__((used)) static int FUNC_3(struct rsxx_cardinfo *VAR_6)
{
 unsigned int VAR_7;
 signed long VAR_8;
 const int VAR_9 = FUNC_0(120000);
 int VAR_10;


 VAR_8 = VAR_5;
 do {
  VAR_10 = FUNC_1(VAR_6, &VAR_7);
  if (VAR_10)
   return VAR_10;
 } while (VAR_7 == VAR_3 &&
   (VAR_5 - VAR_8 < VAR_9));

 if (VAR_7 == VAR_3)
  return -VAR_4;


 if ((VAR_7 != VAR_2) &&
     (VAR_7 != VAR_1)) {
  VAR_10 = FUNC_2(VAR_6, VAR_0);
  if (VAR_10)
   return VAR_10;
 }

 VAR_8 = VAR_5;
 do {
  VAR_10 = FUNC_1(VAR_6, &VAR_7);
  if (VAR_10)
   return VAR_10;
 } while (VAR_7 != VAR_1 &&
   (VAR_5 - VAR_8 < VAR_9));

 if (VAR_7 != VAR_1)
  return -VAR_4;

 return 0;
}
