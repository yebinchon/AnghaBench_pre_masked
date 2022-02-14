
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int linescreen; int priority; int (* PostPixelFetchCalc ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ vdp2draw_struct ;
typedef int u32 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int,int,int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void FUNC_4(vdp2draw_struct *VAR_0, u32 VAR_1, u32 VAR_2, int VAR_3, int VAR_4)
{
   u32 VAR_5 = VAR_0->PostPixelFetchCalc(VAR_0, FUNC_0(FUNC_1(VAR_0, VAR_1, VAR_2), VAR_1));
   int VAR_6 = VAR_3 * 2;
   FUNC_2(VAR_0->priority, VAR_6, VAR_4, VAR_5, VAR_0->linescreen, VAR_0);
   FUNC_2(VAR_0->priority, VAR_6 + 1, VAR_4, VAR_5, VAR_0->linescreen, VAR_0);
}
