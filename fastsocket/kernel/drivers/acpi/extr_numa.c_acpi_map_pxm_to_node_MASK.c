
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int* VAR_3 ;

int FUNC_4(int VAR_4)
{
 int VAR_5 = VAR_3[VAR_4];

 if (VAR_5 < 0){
  if (FUNC_3(VAR_2) >= VAR_0)
   return VAR_1;
  VAR_5 = FUNC_1(VAR_2);
  FUNC_0(VAR_4, VAR_5);
  FUNC_2(VAR_5, VAR_2);
 }

 return VAR_5;
}
