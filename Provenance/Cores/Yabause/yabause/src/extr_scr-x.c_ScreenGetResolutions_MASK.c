
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ current_rate; scalar_t__ current_size; int num_rates; int dpy; int rates; int num_sizes; int xrrs; } ;
typedef TYPE_1__ X11ResolutionList ;
typedef TYPE_1__* ResolutionList ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 TYPE_1__* FUNC_3 (int) ;

ResolutionList FUNC_4()
{
   X11ResolutionList * VAR_0;

   VAR_0 = FUNC_3(sizeof(X11ResolutionList));

   VAR_0->dpy = FUNC_0(((void*)0));
   VAR_0->xrrs = FUNC_2(VAR_0->dpy, 0, &VAR_0->num_sizes);
   VAR_0->rates = FUNC_1(VAR_0->dpy, 0, 0, &VAR_0->num_rates);
   VAR_0->current_size = 0;
   VAR_0->current_rate = 0;

   return VAR_0;
}
