
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
struct sn9c102_device {scalar_t__ bridge; scalar_t__ nbuffers; TYPE_6__* frame; TYPE_3__ module_param; TYPE_2__ sensor; } ;
typedef enum sn9c102_io_method { ____Placeholder_sn9c102_io_method } sn9c102_io_method ;
struct TYPE_10__ {scalar_t__ offset; } ;
struct TYPE_11__ {size_t length; scalar_t__ flags; int memory; int field; scalar_t__ sequence; int type; TYPE_4__ m; scalar_t__ index; } ;
struct TYPE_12__ {TYPE_5__ buf; void* bufmem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32
FUNC_2(struct sn9c102_device* VAR_7, u32 VAR_8,
   enum sn9c102_io_method VAR_9)
{
 struct v4l2_pix_format* VAR_10 = &(VAR_7->sensor.pix_format);
 struct v4l2_rect* VAR_11 = &(VAR_7->sensor.cropcap.bounds);
 size_t VAR_12 = VAR_7->module_param.force_munmap || VAR_9 == VAR_2 ?
      (VAR_10->width * VAR_10->height * VAR_10->priv) / 8 :
      (VAR_11->width * VAR_11->height * VAR_10->priv) / 8;
 void* VAR_13 = ((void*)0);
 u32 VAR_14;

 if (VAR_8 > VAR_3)
  VAR_8 = VAR_3;

 if (VAR_7->bridge == VAR_0 || VAR_7->bridge == VAR_1)
  VAR_12 += 589 + 2;

 VAR_7->nbuffers = VAR_8;
 while (VAR_7->nbuffers > 0) {
  if ((VAR_13 = FUNC_1(VAR_7->nbuffers *
         FUNC_0(VAR_12))))
   break;
  VAR_7->nbuffers--;
 }

 for (VAR_14 = 0; VAR_14 < VAR_7->nbuffers; VAR_14++) {
  VAR_7->frame[VAR_14].bufmem = VAR_13 + VAR_14*FUNC_0(VAR_12);
  VAR_7->frame[VAR_14].buf.index = VAR_14;
  VAR_7->frame[VAR_14].buf.m.offset = VAR_14*FUNC_0(VAR_12);
  VAR_7->frame[VAR_14].buf.length = VAR_12;
  VAR_7->frame[VAR_14].buf.type = VAR_4;
  VAR_7->frame[VAR_14].buf.sequence = 0;
  VAR_7->frame[VAR_14].buf.field = VAR_5;
  VAR_7->frame[VAR_14].buf.memory = VAR_6;
  VAR_7->frame[VAR_14].buf.flags = 0;
 }

 return VAR_7->nbuffers;
}
