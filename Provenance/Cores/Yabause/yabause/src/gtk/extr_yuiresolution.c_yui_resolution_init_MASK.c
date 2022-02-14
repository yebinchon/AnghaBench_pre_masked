
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * options; int * entry_h; int * entry_w; } ;
typedef TYPE_1__ YuiResolution ;
typedef int GtkWidget ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_6 (int ,int *,int ,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int ,int) ;
 void* FUNC_10 () ;
 int FUNC_11 (int ,int) ;
 int * FUNC_12 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_13(YuiResolution * VAR_4) {
 GtkWidget * VAR_5;
 GtkWidget * VAR_6;

 FUNC_9 (FUNC_2 (VAR_4), 10);

 VAR_5 = FUNC_12 ("Width");
 FUNC_6(FUNC_0(VAR_4), VAR_5, VAR_0, VAR_0, 0);

 VAR_4->entry_w = FUNC_10 ();
 FUNC_11(FUNC_3(VAR_4->entry_w), 8);
 FUNC_6(FUNC_0(VAR_4), VAR_4->entry_w, VAR_0, VAR_0, 0);

 VAR_6 = FUNC_12 ("Height");
 FUNC_6(FUNC_0(VAR_4), VAR_6, VAR_0, VAR_0, 0);

 VAR_4->entry_h = FUNC_10 ();
 FUNC_11(FUNC_3(VAR_4->entry_h), 8);
 FUNC_6(FUNC_0(VAR_4), VAR_4->entry_h, VAR_0, VAR_0, 0);

 VAR_4->options = FUNC_8();
 FUNC_7(FUNC_1(VAR_4->options), "Window");
 FUNC_7(FUNC_1(VAR_4->options), "Fullscreen");
 FUNC_7(FUNC_1(VAR_4->options), "Keep ratio");
 FUNC_6(FUNC_0(VAR_4), VAR_4->options, VAR_0, VAR_0, 0);

 FUNC_5(VAR_4->entry_w, "changed", FUNC_4(VAR_3), VAR_4);
 FUNC_5(VAR_4->entry_h, "changed", FUNC_4(VAR_1), VAR_4);
 FUNC_5(VAR_4->options, "changed", FUNC_4(VAR_2), VAR_4);
}
