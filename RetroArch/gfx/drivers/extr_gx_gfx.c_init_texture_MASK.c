
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ video_smooth; } ;
struct TYPE_8__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_9__ {scalar_t__ menu_texture_enable; scalar_t__ rgb32; } ;
typedef TYPE_3__ gx_video_t ;
struct TYPE_11__ {int data; int obj; } ;
struct TYPE_10__ {int data; int obj; } ;
typedef int GXTexObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned int,unsigned int,int ,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 () ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_3 () ;
 TYPE_5__ VAR_7 ;
 int FUNC_4 (unsigned int*,unsigned int*,size_t*) ;
 TYPE_4__ VAR_8 ;

__attribute__((used)) static void FUNC_5(void *VAR_9, unsigned VAR_10, unsigned VAR_11)
{
   size_t VAR_12;
   unsigned VAR_13, VAR_14;
   gx_video_t *VAR_15 = (gx_video_t*)VAR_9;
   GXTexObj *VAR_16 = (GXTexObj*)&VAR_7.obj;
   GXTexObj *VAR_17 = (GXTexObj*)&VAR_8.obj;
   settings_t *VAR_18 = FUNC_3();
   unsigned VAR_19 = VAR_18->bools.video_smooth ? VAR_2 : VAR_3;

   VAR_10 &= ~3;
   VAR_11 &= ~3;

   FUNC_4(&VAR_13, &VAR_14,
         &VAR_12);

   FUNC_0(VAR_16, VAR_7.data, VAR_10, VAR_11,
         (VAR_15->rgb32) ? VAR_6 : VAR_15->menu_texture_enable ?
         VAR_5 : VAR_4,
         VAR_0, VAR_0, VAR_1);
   FUNC_1(VAR_16, VAR_19, VAR_19);
   FUNC_0(VAR_17, VAR_8.data, VAR_13, VAR_14,
         VAR_5, VAR_0, VAR_0, VAR_1);
   FUNC_1(VAR_17, VAR_19, VAR_19);
   FUNC_2();
}
