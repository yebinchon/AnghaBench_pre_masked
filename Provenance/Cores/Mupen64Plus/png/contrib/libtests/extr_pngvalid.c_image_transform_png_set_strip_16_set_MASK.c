
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int max_gamma_8; } ;
typedef TYPE_1__ transform_display ;
typedef int png_structp ;
typedef int png_infop ;
struct TYPE_8__ {TYPE_3__* next; } ;
typedef TYPE_2__ image_transform ;
struct TYPE_9__ {int (* set ) (TYPE_3__*,TYPE_1__*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(const image_transform *VAR_1,
    transform_display *VAR_2, png_structp VAR_3, png_infop VAR_4)
{
   FUNC_0(VAR_3);


      VAR_2->max_gamma_8 = VAR_0;

   VAR_1->next->set(VAR_1->next, VAR_2, VAR_3, VAR_4);
}
