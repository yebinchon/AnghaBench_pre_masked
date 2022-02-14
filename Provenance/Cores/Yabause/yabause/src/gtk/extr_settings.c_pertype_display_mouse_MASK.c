
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int combo; } ;
typedef int GtkWidget ;
typedef int GList ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,char*,int *) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,char*,int ,int *) ;
 int FUNC_9 (int ,int *,int ,int ,int ) ;
 int FUNC_10 (int ,int) ;
 int * FUNC_11 (int ,int,double) ;
 int FUNC_12 (int ,int ) ;
 int * FUNC_13 (int ,int) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_16 (int ,char*,int ) ;
 int * FUNC_17 (int ,char*,char*,int ) ;

__attribute__((used)) static void FUNC_18(GtkWidget * VAR_7)
{
   GtkWidget * VAR_8;
   GtkWidget * VAR_9;
   GtkWidget * VAR_10 = FUNC_13(VAR_0, 10);
   GtkWidget * VAR_11 = FUNC_17(VAR_3, "General", "MousePerCore", VAR_5);
   GList * VAR_12 = ((void*)0);

   FUNC_10(FUNC_2(VAR_11), 0);
   FUNC_10(FUNC_2(VAR_10), 10);
   FUNC_9(FUNC_0 (VAR_10), VAR_11, VAR_0, VAR_0, 0);

   VAR_8 = FUNC_11(0, 10, 0.1);
   FUNC_12(FUNC_3(VAR_8), FUNC_6(VAR_3, "General", "MouseSpeed", ((void*)0)));
   FUNC_8(VAR_8, "value-changed", FUNC_4(VAR_4), ((void*)0));
   FUNC_9(FUNC_0 (VAR_10), VAR_8, VAR_0, VAR_0, 0);

   FUNC_9 (FUNC_0 (VAR_7), VAR_10, VAR_2, VAR_2, 0);

   FUNC_9 (FUNC_0 (VAR_7), FUNC_14(), VAR_2, VAR_2, 0);

   VAR_9 = FUNC_16(VAR_3, "Mouse", VAR_1);
   VAR_12 = FUNC_7(VAR_12, VAR_9);
   FUNC_10(FUNC_2(VAR_9), 10);
   FUNC_9 (FUNC_0 (VAR_7), VAR_9, VAR_2, VAR_2, 0);

   FUNC_8(FUNC_1(FUNC_5(VAR_11)->combo), "changed", FUNC_4(VAR_6), VAR_12);
   FUNC_15(VAR_7);
}
