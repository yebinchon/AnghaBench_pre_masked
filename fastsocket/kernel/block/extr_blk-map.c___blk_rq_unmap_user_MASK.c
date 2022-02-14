
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static int FUNC_3(struct bio *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1) {
  if (FUNC_0(VAR_1, VAR_0))
   FUNC_2(VAR_1);
  else
   VAR_2 = FUNC_1(VAR_1);
 }

 return VAR_2;
}
