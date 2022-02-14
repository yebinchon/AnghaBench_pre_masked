
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int littleendian; } ;
struct TYPE_9__ {TYPE_1__ this; } ;
typedef TYPE_2__ transform_display ;
typedef int png_structp ;
typedef int png_infop ;
struct TYPE_10__ {TYPE_4__* next; } ;
typedef TYPE_3__ image_transform ;
struct TYPE_11__ {int (* set ) (TYPE_4__*,TYPE_2__*,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(const image_transform *VAR_0,
    transform_display *VAR_1, png_structp VAR_2, png_infop VAR_3)
{
   FUNC_0(VAR_2);
   VAR_1->this.littleendian = 1;
   VAR_0->next->set(VAR_0->next, VAR_1, VAR_2, VAR_3);
}
