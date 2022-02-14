
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dumchannel_uf {int channelnr; int height; int width; int y_offset; int x_offset; int source; int dirty; } ;
struct TYPE_4__ {int* fb_owning_channel; TYPE_1__* chan_uf_store; } ;
struct TYPE_3__ {int height; int width; int y_offset; int x_offset; int source; int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_2__ VAR_3 ;

int FUNC_1(struct dumchannel_uf VAR_4, int VAR_5)
{
 int VAR_6 = VAR_4.channelnr;
 int VAR_7;

 if (VAR_6 < 0 || VAR_6 > VAR_2)
  return -VAR_1;
 else if (VAR_3.fb_owning_channel[VAR_6] != VAR_5)
  return -VAR_0;
 else if ((VAR_7 =
    FUNC_0(VAR_4.channelnr, 0, VAR_4.dirty,
          VAR_4.source, VAR_4.y_offset,
          VAR_4.x_offset, VAR_4.height,
          VAR_4.width)) != 0)
  return VAR_7;
 else {
  VAR_3.chan_uf_store[VAR_6].dirty = VAR_4.dirty;
  VAR_3.chan_uf_store[VAR_6].source = VAR_4.source;
  VAR_3.chan_uf_store[VAR_6].x_offset = VAR_4.x_offset;
  VAR_3.chan_uf_store[VAR_6].y_offset = VAR_4.y_offset;
  VAR_3.chan_uf_store[VAR_6].width = VAR_4.width;
  VAR_3.chan_uf_store[VAR_6].height = VAR_4.height;
 }

 return 0;
}
