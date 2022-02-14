
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* png_structrp ;
struct TYPE_6__ {scalar_t__ avail_in; int * next_in; int * next_out; } ;
struct TYPE_7__ {int flags; scalar_t__ zowner; int idat_size; TYPE_1__ zstream; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;

void
FUNC_2(png_structrp VAR_3)
{





   if ((VAR_3->flags & VAR_1) == 0)
   {




      FUNC_1(VAR_3, ((void*)0), 0);
      VAR_3->zstream.next_out = ((void*)0);




      if ((VAR_3->flags & VAR_1) == 0)
      {
         VAR_3->mode |= VAR_0;
         VAR_3->flags |= VAR_1;
      }
   }




   if (VAR_3->zowner == VAR_2)
   {

      VAR_3->zstream.next_in = ((void*)0);
      VAR_3->zstream.avail_in = 0;


      VAR_3->zowner = 0;






      (void)FUNC_0(VAR_3, VAR_3->idat_size);
   }
}
