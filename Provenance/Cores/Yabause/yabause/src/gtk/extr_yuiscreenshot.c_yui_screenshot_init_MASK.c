
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {struct TYPE_16__* image; } ;
typedef TYPE_1__ YuiScreenshot ;
typedef TYPE_1__ GtkWidget ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*,int ,TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_1__*,int ,int ,int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,int) ;
 TYPE_1__* FUNC_10 () ;
 TYPE_1__* FUNC_11 (int ,int) ;
 int VAR_4 ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ,char*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_14 () ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_15 (YuiScreenshot * VAR_7) {
 GtkWidget * VAR_8;
 GtkWidget * VAR_9;
 GtkWidget * VAR_10;

 FUNC_13(FUNC_3(VAR_7), "Screenshot");
 FUNC_9(FUNC_1(VAR_7), 4);

 VAR_8 = FUNC_11(VAR_0, 4);
 FUNC_8(FUNC_1(VAR_7), VAR_8);

 VAR_7->image = FUNC_14();
 FUNC_6(FUNC_0(VAR_8), VAR_7->image, VAR_0, VAR_0, 0);
 FUNC_12(FUNC_2(VAR_7->image), 320, 224);

 VAR_9 = FUNC_10();
 FUNC_6(FUNC_0(VAR_8), VAR_9, VAR_0, VAR_0, 0);

 VAR_10 = FUNC_7(VAR_2);
 FUNC_6(FUNC_0(VAR_9), VAR_10, VAR_0, VAR_0, 0);
 FUNC_5(VAR_10, "clicked", FUNC_4(VAR_5), VAR_7);

 VAR_10 = FUNC_7(VAR_3);
 FUNC_6(FUNC_0(VAR_9), VAR_10, VAR_0, VAR_0, 0);
 FUNC_5(VAR_10, "clicked", FUNC_4(VAR_6), VAR_7->image);

 VAR_10 = FUNC_7(VAR_1);
 FUNC_6(FUNC_0(VAR_9), VAR_10, VAR_0, VAR_0, 0);
 FUNC_5(VAR_10, "clicked", FUNC_4(VAR_4), VAR_7);
}
