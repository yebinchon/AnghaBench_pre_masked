
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,char*,int ,int *) ;
 int FUNC_7 (int ,int *,int ,int ,int ) ;
 int FUNC_8 (int ,int) ;
 int * FUNC_9 (int ,int) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_12 (int ,char*,int ) ;
 int * FUNC_13 (int ,char*,char*,int ) ;

__attribute__((used)) static void FUNC_14(GtkWidget * VAR_7)
{
   GtkWidget * VAR_8, * VAR_9;
   GtkWidget * VAR_10 = FUNC_9(VAR_0, 10);
   GtkWidget * VAR_11 = FUNC_13(VAR_2, "General", "PerCore", VAR_6);
   GList * VAR_12 = ((void*)0);

   FUNC_8(FUNC_2(VAR_11), 0);

   FUNC_8(FUNC_2(VAR_10), 10);

   FUNC_7(FUNC_0 (VAR_10), VAR_11, VAR_0, VAR_0, 0);

   VAR_8 = FUNC_12(VAR_2, "Pad", VAR_3);
   VAR_12 = FUNC_5(VAR_12, VAR_8);

   FUNC_7 (FUNC_0 (VAR_10), VAR_8, VAR_1, VAR_1, 0);

   FUNC_7 (FUNC_0 (VAR_7), VAR_10, VAR_1, VAR_1, 0);

   FUNC_7 (FUNC_0 (VAR_7), FUNC_10(), VAR_1, VAR_1, 0);

   VAR_9 = FUNC_12(VAR_2, "Pad", VAR_4);
   VAR_12 = FUNC_5(VAR_12, VAR_9);

   FUNC_8(FUNC_2(VAR_9), 10);

   FUNC_7 (FUNC_0 (VAR_7), VAR_9, VAR_1, VAR_1, 0);

   FUNC_6(FUNC_1(FUNC_4(VAR_11)->combo), "changed", FUNC_3(VAR_5), VAR_12);

   FUNC_11(VAR_7);
}
