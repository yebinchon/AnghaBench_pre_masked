
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wnd; scalar_t__ cmap; int * dpy; int * vi; int * ctx; } ;
typedef TYPE_1__ GLContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5 (GLContext* VAR_0)
{
  if (((void*)0) != VAR_0->dpy && ((void*)0) != VAR_0->ctx) FUNC_4(VAR_0->dpy, VAR_0->ctx);
  if (((void*)0) != VAR_0->dpy && 0 != VAR_0->wnd) FUNC_1(VAR_0->dpy, VAR_0->wnd);
  if (((void*)0) != VAR_0->dpy && 0 != VAR_0->cmap) FUNC_3(VAR_0->dpy, VAR_0->cmap);
  if (((void*)0) != VAR_0->vi) FUNC_2(VAR_0->vi);
  if (((void*)0) != VAR_0->dpy) FUNC_0(VAR_0->dpy);
}
