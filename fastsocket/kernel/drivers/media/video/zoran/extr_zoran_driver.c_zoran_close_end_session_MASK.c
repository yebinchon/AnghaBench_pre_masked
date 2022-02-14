
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ active; scalar_t__ allocated; } ;
struct zoran_fh {scalar_t__ overlay_active; scalar_t__ map_mode; TYPE_3__ buffers; struct zoran* zr; } ;
struct TYPE_5__ {scalar_t__ active; scalar_t__ allocated; } ;
struct TYPE_4__ {scalar_t__ active; scalar_t__ allocated; } ;
struct zoran {scalar_t__ overlay_active; TYPE_2__ jpg_buffers; int spinlock; TYPE_1__ v4l_buffers; int * overlay_mask; int v4l_memgrab_active; scalar_t__ v4l_overlay_active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct zoran_fh*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct zoran_fh*) ;
 int FUNC_4 (struct zoran*,int ) ;
 int FUNC_5 (struct zoran*,int ) ;
 int FUNC_6 (struct zoran*,int ) ;

__attribute__((used)) static void FUNC_7(struct zoran_fh *VAR_3)
{
 struct zoran *VAR_4 = VAR_3->zr;


 if (VAR_3->overlay_active != VAR_1) {
  VAR_3->overlay_active = VAR_4->overlay_active = VAR_1;
  VAR_4->v4l_overlay_active = 0;
  if (!VAR_4->v4l_memgrab_active)
   FUNC_5(VAR_4, 0);
  VAR_4->overlay_mask = ((void*)0);
 }

 if (VAR_3->map_mode == VAR_2) {

  if (VAR_3->buffers.active != VAR_1) {
   unsigned long VAR_5;

   FUNC_1(&VAR_4->spinlock, VAR_5);
   FUNC_6(VAR_4, 0);
   VAR_4->v4l_buffers.allocated = 0;
   VAR_4->v4l_buffers.active = VAR_3->buffers.active = VAR_1;
   FUNC_2(&VAR_4->spinlock, VAR_5);
  }


  if (VAR_3->buffers.allocated)
   FUNC_3(VAR_3);
 } else {

  if (VAR_3->buffers.active != VAR_1) {
   FUNC_4(VAR_4, VAR_0);
   VAR_4->jpg_buffers.allocated = 0;
   VAR_4->jpg_buffers.active = VAR_3->buffers.active = VAR_1;
  }


  if (VAR_3->buffers.allocated)
   FUNC_0(VAR_3);
 }
}
