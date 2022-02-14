
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_rect {int width; int height; } ;
struct v4l2_pix_format {int width; int height; int priv; } ;
struct TYPE_9__ {scalar_t__ force_munmap; } ;
struct TYPE_7__ {struct v4l2_rect bounds; } ;
struct TYPE_8__ {TYPE_1__ cropcap; struct v4l2_pix_format pix_format; } ;
struct et61x251_device {scalar_t__ nbuffers; TYPE_6__* frame; TYPE_3__ module_param; TYPE_2__ sensor; } ;
typedef enum et61x251_io_method { ____Placeholder_et61x251_io_method } et61x251_io_method ;
struct TYPE_10__ {scalar_t__ offset; } ;
struct TYPE_11__ {size_t length; scalar_t__ flags; int memory; int field; scalar_t__ sequence; int type; TYPE_4__ m; scalar_t__ index; } ;
struct TYPE_12__ {TYPE_5__ buf; void* bufmem; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t const) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32
FUNC_2(struct et61x251_device* VAR_5, u32 VAR_6,
    enum et61x251_io_method VAR_7)
{
 struct v4l2_pix_format* VAR_8 = &(VAR_5->sensor.pix_format);
 struct v4l2_rect* VAR_9 = &(VAR_5->sensor.cropcap.bounds);
 const size_t VAR_10 = VAR_5->module_param.force_munmap ||
     VAR_7 == VAR_1 ?
     (VAR_8->width * VAR_8->height * VAR_8->priv) / 8 :
     (VAR_9->width * VAR_9->height * VAR_8->priv) / 8;
 void* VAR_11 = ((void*)0);
 u32 VAR_12;

 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;

 VAR_5->nbuffers = VAR_6;
 while (VAR_5->nbuffers > 0) {
  if ((VAR_11 = FUNC_1(VAR_5->nbuffers *
         FUNC_0(VAR_10))))
   break;
  VAR_5->nbuffers--;
 }

 for (VAR_12 = 0; VAR_12 < VAR_5->nbuffers; VAR_12++) {
  VAR_5->frame[VAR_12].bufmem = VAR_11 + VAR_12*FUNC_0(VAR_10);
  VAR_5->frame[VAR_12].buf.index = VAR_12;
  VAR_5->frame[VAR_12].buf.m.offset = VAR_12*FUNC_0(VAR_10);
  VAR_5->frame[VAR_12].buf.length = VAR_10;
  VAR_5->frame[VAR_12].buf.type = VAR_2;
  VAR_5->frame[VAR_12].buf.sequence = 0;
  VAR_5->frame[VAR_12].buf.field = VAR_3;
  VAR_5->frame[VAR_12].buf.memory = VAR_4;
  VAR_5->frame[VAR_12].buf.flags = 0;
 }

 return VAR_5->nbuffers;
}
