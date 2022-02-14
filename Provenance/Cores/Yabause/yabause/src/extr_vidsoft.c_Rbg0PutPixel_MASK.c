
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int linescreen; int (* PostPixelFetchCalc ) (TYPE_1__*,int ) ;int priority; } ;
typedef TYPE_1__ vdp2draw_struct ;
typedef int u32 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int) ;
 int FUNC_3 (int ,int,int,int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;

void FUNC_5(vdp2draw_struct *VAR_1, u32 VAR_2, u32 VAR_3, int VAR_4, int VAR_5)
{
   if (VAR_0)
   {
      FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
   }
   else
      FUNC_3(VAR_1->priority, VAR_4, VAR_5, VAR_1->PostPixelFetchCalc(VAR_1, FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_3), VAR_2)), VAR_1->linescreen, VAR_1);
}
