
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int carr; } ;
struct TYPE_10__ {TYPE_1__ raster_block; } ;
struct TYPE_13__ {int carr; } ;
struct TYPE_14__ {TYPE_5__ raster_block; } ;
struct TYPE_11__ {int carr; } ;
struct TYPE_12__ {TYPE_3__ raster_block; } ;
struct TYPE_15__ {TYPE_2__ hint; TYPE_6__ list; TYPE_4__ title; } ;
struct TYPE_16__ {scalar_t__ thumbnail_path_data; TYPE_7__ font_data; } ;
typedef TYPE_8__ materialui_handle_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   materialui_handle_t *VAR_1 = (materialui_handle_t*)VAR_0;

   if (!VAR_1)
      return;

   FUNC_2(&VAR_1->font_data.title.raster_block.carr);
   FUNC_2(&VAR_1->font_data.list.raster_block.carr);
   FUNC_2(&VAR_1->font_data.hint.raster_block.carr);

   FUNC_0(((void*)0), ((void*)0));

   if (VAR_1->thumbnail_path_data)
      FUNC_1(VAR_1->thumbnail_path_data);
}
