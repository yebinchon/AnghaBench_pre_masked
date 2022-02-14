
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int filler; } ;
struct TYPE_10__ {TYPE_1__ this; } ;
typedef TYPE_2__ transform_display ;
typedef int png_structp ;
typedef int png_infop ;
struct TYPE_11__ {TYPE_4__* next; } ;
typedef TYPE_3__ image_transform ;
struct TYPE_13__ {int flags; int filler; } ;
struct TYPE_12__ {int (* set ) (TYPE_4__*,TYPE_2__*,int ,int ) ;} ;


 TYPE_8__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(const image_transform *VAR_1,
    transform_display *VAR_2, png_structp VAR_3, png_infop VAR_4)
{




   VAR_0.filler = FUNC_2();
   VAR_0.flags = FUNC_1();

   FUNC_0(VAR_3, VAR_0.filler, VAR_0.flags);




   VAR_2->this.filler = 1;

   VAR_1->next->set(VAR_1->next, VAR_2, VAR_3, VAR_4);
}
