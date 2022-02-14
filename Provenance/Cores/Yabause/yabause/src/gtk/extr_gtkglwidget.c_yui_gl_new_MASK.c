
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_init; } ;
typedef int GtkWidget ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_12 ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int *,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 () ;
 int VAR_15 ;
 int VAR_16 ;

GtkWidget * FUNC_10(void) {
 GtkWidget * VAR_17;
 VAR_17 = FUNC_2(FUNC_4(FUNC_9(), ((void*)0)));
 FUNC_3(VAR_17)->is_init = 0;





 FUNC_5 (FUNC_0(VAR_17),"configure_event", FUNC_1(VAR_16),0);

 FUNC_7(VAR_17, VAR_11 | VAR_0 | VAR_1);

 FUNC_5(FUNC_0(VAR_17), "motion-notify-event", FUNC_1(VAR_15),0);
 FUNC_5(FUNC_0(VAR_17), "button-press-event", FUNC_1(VAR_13),0);
 FUNC_5(FUNC_0(VAR_17), "button-release-event", FUNC_1(VAR_14),0);

 return VAR_17;
}
