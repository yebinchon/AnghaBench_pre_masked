
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_1__ ;


struct CellScrollData {int dummy; } ;
typedef int Vdp2 ;
struct TYPE_43__ {int PRINA; int PRINB; int PRIR; int SFPRMD; int TVMD; } ;
struct TYPE_42__ {int* need_draw; scalar_t__* draw_finished; int * cell_scroll_data; int * color_ram; int * ram; int regs; int * lines; } ;


 scalar_t__ FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_8 (TYPE_2__*,int ,int ,TYPE_2__*,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (int*,int*,int*,size_t,int (*) (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*)) ;
 int VAR_11 ;
 int FUNC_10 (int ) ;
 TYPE_2__* VAR_12 ;
 int FUNC_11 (int *,TYPE_2__*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_1__ VAR_16 ;

void FUNC_12(void)
{
   int VAR_17[6] = { 0 };
   int VAR_18[6] = { 0 };
   int VAR_19 = 0;

   FUNC_2(VAR_10->TVMD);
   VAR_18[VAR_0] = VAR_10->PRINA & 0x7;
   VAR_18[VAR_1] = ((VAR_10->PRINA >> 8) & 0x7);
   VAR_18[VAR_2] = (VAR_10->PRINB & 0x7);
   VAR_18[VAR_3] = ((VAR_10->PRINB >> 8) & 0x7);
   VAR_18[VAR_4] = (VAR_10->PRIR & 0x7);

   FUNC_1();

   if (VAR_10->SFPRMD & 0x3FF)
   {
      VAR_17[VAR_0] = (VAR_10->SFPRMD >> 0) & 0x3;
      VAR_17[VAR_1] = (VAR_10->SFPRMD >> 2) & 0x3;
      VAR_17[VAR_2] = (VAR_10->SFPRMD >> 4) & 0x3;
      VAR_17[VAR_3] = (VAR_10->SFPRMD >> 6) & 0x3;
      VAR_17[VAR_4] = (VAR_10->SFPRMD >> 8) & 0x3;
   }

   if (VAR_15 > 0)
   {
      FUNC_11(VAR_16.lines, VAR_8, sizeof(Vdp2) * 270);
      FUNC_11(&VAR_16.regs, VAR_10, sizeof(Vdp2));
      FUNC_11(VAR_16.ram, VAR_9, 0x80000);
      FUNC_11(VAR_16.color_ram, VAR_7, 0x1000);
      FUNC_11(VAR_16.cell_scroll_data, VAR_12, sizeof(struct CellScrollData) * 270);
   }


   if (FUNC_0() && VAR_15 > 0)
   {
      VAR_16.need_draw[VAR_5] = 1;
      VAR_16.draw_finished[VAR_5] = 0;
      FUNC_10(VAR_11);
      VAR_19++;
   }
   else
   {
      FUNC_8(VAR_10, VAR_13, VAR_14, VAR_9, VAR_6, VAR_8, VAR_7);
   }

   if (VAR_15 > 0)
   {
      FUNC_9(VAR_18, VAR_17, &VAR_19, VAR_0, FUNC_3);
      FUNC_9(VAR_18, VAR_17, &VAR_19, VAR_4, FUNC_7);
      FUNC_9(VAR_18, VAR_17, &VAR_19, VAR_1, FUNC_4);
      FUNC_9(VAR_18, VAR_17, &VAR_19, VAR_2, FUNC_5);
      FUNC_9(VAR_18, VAR_17, &VAR_19, VAR_3, FUNC_6);
   }
   else
   {
      FUNC_3(VAR_8, VAR_10, VAR_9, VAR_7, VAR_12);
      FUNC_4(VAR_8, VAR_10, VAR_9, VAR_7, VAR_12);
      FUNC_5(VAR_8, VAR_10, VAR_9, VAR_7, VAR_12);
      FUNC_6(VAR_8, VAR_10, VAR_9, VAR_7, VAR_12);
      FUNC_7(VAR_8, VAR_10, VAR_9, VAR_7, VAR_12);
   }
}
