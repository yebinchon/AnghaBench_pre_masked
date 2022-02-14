
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int guchar ;
typedef int gboolean ;
struct TYPE_5__ {int image; } ;
typedef TYPE_1__ YuiScreenshot ;
struct TYPE_7__ {int pixels_height; int pixels_width; int pixels_rowstride; scalar_t__ pixels; } ;
struct TYPE_6__ {int area; } ;
typedef int GdkPixbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int const*,int ,int ,int,int ,int ,int ,int *,int *) ;
 TYPE_3__* VAR_3 ;
 int FUNC_5 (int ,int *,int ,int ) ;

__attribute__((used)) static gboolean FUNC_6(YuiScreenshot * VAR_4) {
 GdkPixbuf * VAR_5, * VAR_6;

 VAR_5 = FUNC_4((const guchar *) FUNC_0(VAR_3->area)->pixels, VAR_1, VAR_0, 8,
   FUNC_0(VAR_3->area)->pixels_width, FUNC_0(VAR_3->area)->pixels_height, FUNC_0(VAR_3->area)->pixels_rowstride, ((void*)0), ((void*)0));
 VAR_6 = FUNC_3(VAR_5, VAR_0);

 FUNC_5(FUNC_1(VAR_4->image), VAR_6, FUNC_0(VAR_3->area)->pixels_width, FUNC_0(VAR_3->area)->pixels_height);

 FUNC_2(VAR_5);
 FUNC_2(VAR_6);

 return VAR_2;
}
