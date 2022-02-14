
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t s32 ;
struct TYPE_2__ {int data_fmt; } ;


 int VAR_0 ;



 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(s32 VAR_3)
{
 switch(VAR_2[VAR_3].data_fmt) {
  case 130:
   FUNC_1(VAR_1[VAR_3], 0, VAR_0);
   FUNC_0(VAR_1[VAR_3],0);
   FUNC_2(VAR_1[VAR_3],0);
   break;
  case 129:
   FUNC_1(VAR_1[VAR_3], VAR_0, 0);
   FUNC_0(VAR_1[VAR_3],1);
   FUNC_2(VAR_1[VAR_3],0);
   break;
  case 128:
   FUNC_1(VAR_1[VAR_3], VAR_0, 0);
   FUNC_0(VAR_1[VAR_3],1);
   FUNC_2(VAR_1[VAR_3],1);
   break;
  default:
   break;
 }
}
