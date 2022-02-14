
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {unsigned int bit_depth; } ;
struct TYPE_11__ {TYPE_1__ this; } ;
typedef TYPE_2__ transform_display ;
typedef int png_structp ;
typedef int png_infop ;
typedef void* png_byte ;
struct TYPE_12__ {TYPE_4__* next; } ;
typedef TYPE_3__ image_transform ;
struct TYPE_14__ {void* alpha; void* gray; void* blue; void* green; void* red; } ;
struct TYPE_13__ {int (* set ) (TYPE_4__*,TYPE_2__*,int ,int ) ;} ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (int ,TYPE_6__*) ;
 scalar_t__ FUNC_1 (unsigned int const) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(const image_transform *VAR_1,
    transform_display *VAR_2, png_structp VAR_3, png_infop VAR_4)
{






   const unsigned int VAR_5 = VAR_2->this.bit_depth;

   VAR_0.red = (png_byte) (FUNC_1(VAR_5)+1);
   VAR_0.green = (png_byte) (FUNC_1(VAR_5)+1);
   VAR_0.blue = (png_byte) (FUNC_1(VAR_5)+1);
   VAR_0.gray = (png_byte) (FUNC_1(VAR_5)+1);
   VAR_0.alpha = (png_byte) (FUNC_1(VAR_5)+1);

   FUNC_0(VAR_3, &VAR_0);
   VAR_1->next->set(VAR_1->next, VAR_2, VAR_3, VAR_4);
}
