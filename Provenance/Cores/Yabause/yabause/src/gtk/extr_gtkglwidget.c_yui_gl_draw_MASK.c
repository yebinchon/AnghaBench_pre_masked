
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int guchar ;
struct TYPE_10__ {int pixels_width; int pixels_height; int pixels_rowstride; int is_init; } ;
typedef TYPE_2__ YuiGl ;
struct TYPE_12__ {int (* GetGlSize ) (int*,int*) ;} ;
struct TYPE_9__ {int width; int height; } ;
struct TYPE_11__ {int window; TYPE_1__ allocation; } ;
typedef int GdkPixbuf ;
typedef int GdkGLDrawable ;
typedef int GdkGLContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int *,int ,int ,int,int,int,int,int ,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int const*,int ,int ,int,int,int,int,int *,int *) ;
 int * FUNC_7 (int *,int,int,int ) ;
 int * FUNC_8 (TYPE_4__*) ;
 int * FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int*,int*) ;

void FUNC_11(YuiGl * VAR_8) {
 int VAR_9, VAR_10;
 GdkPixbuf * VAR_11, * VAR_12;

 VAR_4->GetGlSize( &VAR_9, &VAR_10 );
 VAR_8->pixels_width = FUNC_0(VAR_8)->allocation.width;
 VAR_8->pixels_height = FUNC_0(VAR_8)->allocation.height;
 VAR_8->pixels_rowstride = VAR_8->pixels_width * 4;
 VAR_8->pixels_rowstride += (VAR_8->pixels_rowstride % 4)? (4 - (VAR_8->pixels_rowstride % 4)): 0;

 if (VAR_7 == ((void*)0)) return;

 VAR_11 = FUNC_6((const guchar *) VAR_7, VAR_0, VAR_3, 8,
   VAR_9, VAR_10, VAR_9*4, ((void*)0), ((void*)0));

 if (( VAR_8->pixels_width < VAR_9 + VAR_5 )&&( VAR_8->pixels_height < VAR_10 + VAR_6 )) {

   FUNC_3(FUNC_0(VAR_8)->window, ((void*)0), VAR_11, 0, 0,
     (VAR_8->pixels_width-VAR_9)/2, (VAR_8->pixels_height-VAR_10)/2,
     VAR_9, VAR_10, VAR_2, 0, 0);
 } else {

   VAR_12 = FUNC_7(VAR_11,
       VAR_8->pixels_width, VAR_8->pixels_height, VAR_1 );
   FUNC_3(FUNC_0(VAR_8)->window, ((void*)0),
     VAR_12, 0, 0, 0, 0, VAR_8->pixels_width, VAR_8->pixels_height,
     VAR_2, 0, 0);
   FUNC_1(VAR_12);
 }
 FUNC_1(VAR_11);

 VAR_8->is_init = 1;
}
