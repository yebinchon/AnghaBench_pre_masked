
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* atlas; scalar_t__ tex; } ;
typedef TYPE_2__ gl_core_raster_t ;
struct TYPE_4__ {int buffer; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_8(gl_core_raster_t *VAR_13)
{
   if (VAR_13->tex)
      FUNC_2(1, &VAR_13->tex);
   FUNC_3(1, &VAR_13->tex);
   FUNC_1(VAR_5, VAR_13->tex);

   FUNC_4(VAR_10, 1);
   FUNC_4(VAR_11, 0);
   FUNC_0(VAR_2, 0);
   FUNC_6(VAR_5, 1, VAR_3, VAR_13->atlas->width, VAR_13->atlas->height);
   FUNC_7(VAR_5, 0, 0, 0,
                   VAR_13->atlas->width, VAR_13->atlas->height, VAR_4, VAR_12, VAR_13->atlas->buffer);
   FUNC_5(VAR_5, VAR_6, VAR_1);
   FUNC_5(VAR_5, VAR_7, VAR_1);
   FUNC_5(VAR_5, VAR_8, VAR_0);
   FUNC_5(VAR_5, VAR_9, VAR_0);
   FUNC_1(VAR_5, 0);

   return 1;
}
