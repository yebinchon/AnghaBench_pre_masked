
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int colormap; scalar_t__ border_pixel; } ;
typedef TYPE_1__ XSetWindowAttributes ;
struct TYPE_9__ {int visual; int depth; int screen; } ;
struct TYPE_8__ {int * ctx; int wnd; int * dpy; TYPE_3__* vi; int cmap; } ;
typedef int GLboolean ;
typedef TYPE_2__ GLContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int,int,int ,int ,int ,int ,int,TYPE_1__*) ;
 int * FUNC_4 (int ) ;
 int VAR_10 ;
 TYPE_3__* FUNC_5 (int *,int ,int*) ;
 int * FUNC_6 (int *,TYPE_3__*,int,int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int*,int*) ;

GLboolean FUNC_9 (GLContext* VAR_11)
{
  int VAR_12[] = { VAR_4, VAR_3, VAR_8 };
  int VAR_13, VAR_14;
  XSetWindowAttributes VAR_15;

  if (((void*)0) == VAR_11) return VAR_6;

  VAR_11->dpy = FUNC_4(VAR_10);
  if (((void*)0) == VAR_11->dpy) return VAR_6;

  if (!FUNC_8(VAR_11->dpy, &VAR_13, &VAR_14)) return VAR_6;

  VAR_11->vi = FUNC_5(VAR_11->dpy, FUNC_0(VAR_11->dpy), VAR_12);
  if (((void*)0) == VAR_11->vi) return VAR_6;

  VAR_11->ctx = FUNC_6(VAR_11->dpy, VAR_11->vi, VAR_8, VAR_9);
  if (((void*)0) == VAR_11->ctx) return VAR_6;


  VAR_11->cmap = FUNC_2(VAR_11->dpy, FUNC_1(VAR_11->dpy, VAR_11->vi->screen),
                              VAR_11->vi->visual, VAR_0);
  VAR_15.border_pixel = 0;
  VAR_15.colormap = VAR_11->cmap;
  VAR_11->wnd = FUNC_3(VAR_11->dpy, FUNC_1(VAR_11->dpy, VAR_11->vi->screen),
                           0, 0, 1, 1, 0, VAR_11->vi->depth, VAR_7, VAR_11->vi->visual,
                           VAR_1 | VAR_2, &VAR_15);

  if (!FUNC_7(VAR_11->dpy, VAR_11->wnd, VAR_11->ctx)) return VAR_6;
  return VAR_5;
}
