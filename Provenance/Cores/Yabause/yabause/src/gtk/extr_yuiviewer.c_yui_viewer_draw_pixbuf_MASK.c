
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int w; int h; scalar_t__ pixbuf; } ;
typedef TYPE_1__ YuiViewer ;
struct TYPE_7__ {int window; } ;
typedef int GdkPixbuf ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int,int) ;

void FUNC_5(YuiViewer * VAR_0, GdkPixbuf * VAR_1, int VAR_2, int VAR_3) {
 if (VAR_0->pixbuf) {
  FUNC_2(VAR_0->pixbuf);
 }
 VAR_0->pixbuf = FUNC_1(VAR_1);
 VAR_0->w = VAR_2;
 VAR_0->h = VAR_3;
 FUNC_3(FUNC_0(VAR_0)->window);
 FUNC_4(FUNC_0(VAR_0), 0, 0, VAR_2, VAR_3);
}
