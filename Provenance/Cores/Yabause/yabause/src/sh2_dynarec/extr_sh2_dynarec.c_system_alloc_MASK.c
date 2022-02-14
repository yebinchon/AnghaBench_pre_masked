
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {scalar_t__ isdoingcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regstat*,int) ;
 int FUNC_1 (struct regstat*,int,int) ;
 int FUNC_2 (struct regstat*,int,int) ;
 int FUNC_3 (struct regstat*,int) ;
 int* VAR_4 ;
 int* VAR_5 ;

void FUNC_4(struct regstat *VAR_6,int VAR_7)
{
  FUNC_0(VAR_6,VAR_7);
  FUNC_3(VAR_6,VAR_0);
  if(VAR_5[VAR_7]==12) {
    FUNC_1(VAR_6,VAR_7,15);
    FUNC_3(VAR_6,15);
    FUNC_1(VAR_6,VAR_7,VAR_2);
    FUNC_1(VAR_6,VAR_7,VAR_3);
    FUNC_1(VAR_6,VAR_7,VAR_1);
    FUNC_2(VAR_6,VAR_7,-1);
    VAR_4[VAR_7]=1;
  }
  VAR_6->isdoingcp=0;
}
