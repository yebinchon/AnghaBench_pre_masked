
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t word ;
typedef int byte ;
struct TYPE_3__ {size_t u_law; } ;
typedef TYPE_1__ DIVA_CAPI_ADAPTER ;


 int ** VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static word FUNC_1(DIVA_CAPI_ADAPTER *VAR_2, byte *VAR_3, byte *VAR_4)
{
  word VAR_5;
  word VAR_6;

  for(VAR_5=9;VAR_5 && !FUNC_0(VAR_3,VAR_0[VAR_5][VAR_2->u_law]);VAR_5--);

  for(VAR_6=16;VAR_6<29 &&
           (!FUNC_0(VAR_3,VAR_0[VAR_6][VAR_2->u_law]) || !FUNC_0(VAR_4,VAR_1[VAR_6])); VAR_6++);
  if(VAR_6==29) return VAR_5;
  return VAR_6;
}
