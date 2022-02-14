
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* active; scalar_t__ allocated; TYPE_3__* buffer; } ;
struct TYPE_5__ {int format; scalar_t__ is_set; } ;
struct zoran_fh {TYPE_4__ buffers; int jpg_settings; int v4l_settings; void* overlay_active; TYPE_1__ overlay_settings; struct zoran* zr; } ;
struct zoran {int jpg_settings; int v4l_settings; TYPE_1__ overlay_settings; } ;
struct TYPE_6__ {int frame; } ;
struct TYPE_7__ {TYPE_2__ bs; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct zoran_fh*) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct zoran_fh *VAR_3)
{
 int VAR_4;
 struct zoran *VAR_5 = VAR_3->zr;


 FUNC_0(VAR_3);


 VAR_3->overlay_settings = VAR_5->overlay_settings;
 VAR_3->overlay_settings.is_set = 0;
 VAR_3->overlay_settings.format = VAR_5->overlay_settings.format;
 VAR_3->overlay_active = VAR_2;


 VAR_3->v4l_settings = VAR_5->v4l_settings;

 VAR_3->jpg_settings = VAR_5->jpg_settings;


 FUNC_1(&VAR_3->buffers, 0, sizeof(VAR_3->buffers));
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3->buffers.buffer[VAR_4].state = VAR_0;
  VAR_3->buffers.buffer[VAR_4].bs.frame = VAR_4;
 }
 VAR_3->buffers.allocated = 0;
 VAR_3->buffers.active = VAR_2;
}
