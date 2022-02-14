
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t index; scalar_t__ bpp; int freq; int height; int width; } ;
typedef TYPE_2__ supportedRes_struct ;
struct TYPE_10__ {size_t current_rate; size_t num_rates; size_t current_size; size_t num_sizes; int dpy; int * rates; TYPE_1__* xrrs; } ;
typedef TYPE_3__ X11ResolutionList ;
struct TYPE_8__ {int height; int width; } ;
typedef TYPE_3__* ResolutionList ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,size_t,size_t*) ;
 int FUNC_2 (TYPE_3__*) ;

int FUNC_3(ResolutionList VAR_0, supportedRes_struct * VAR_1)
{
   X11ResolutionList * VAR_2 = VAR_0;

   if (VAR_2->current_rate < VAR_2->num_rates)
   {
      VAR_1->index = VAR_2->current_size;
      VAR_1->width = VAR_2->xrrs[VAR_2->current_size].width;
      VAR_1->height = VAR_2->xrrs[VAR_2->current_size].height;
      VAR_1->freq = VAR_2->rates[VAR_2->current_rate];
      VAR_1->bpp = 0;
      VAR_2->current_rate++;
      return 0;
   }

   VAR_2->current_size++;
   if (VAR_2->current_size < VAR_2->num_sizes)
   {
      VAR_2->rates = FUNC_1(VAR_2->dpy, 0, VAR_2->current_size, &VAR_2->num_rates);
      VAR_2->current_rate = 0;
      return FUNC_3(VAR_2, VAR_1);
   }

   FUNC_0(VAR_2->dpy);
   FUNC_2(VAR_2);
   return 1;
}
