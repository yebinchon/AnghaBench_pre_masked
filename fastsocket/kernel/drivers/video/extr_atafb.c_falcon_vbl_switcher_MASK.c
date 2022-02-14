
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


struct falcon_hw {int sync; int vid_mode; int vid_control; int line_offset; int line_width; int xoffset; scalar_t__ f_shift; scalar_t__ st_shift; scalar_t__ ste_mode; int vss; int vde; int vdb; int vbe; int vbb; int vft; int hss; int hde; int hdb; int hbe; int hbb; int hht; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int line_offset; int xoffset; } ;
struct TYPE_8__ {TYPE_1__ falcon; } ;
struct TYPE_12__ {TYPE_2__ hw; } ;
struct TYPE_11__ {int syncmode; } ;
struct TYPE_10__ {int off_next; int scn_width; } ;
struct TYPE_9__ {int xoffset; int mode; int control; scalar_t__ f_shift; scalar_t__ st_shift; int vss; int vde; int vdb; int vbe; int vbb; int vft; int hss; int hde; int hdb; int hbe; int hbb; int hht; } ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct falcon_hw VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static irqreturn_t FUNC_0(int VAR_8, void *VAR_9)
{
 struct falcon_hw *VAR_10 = &VAR_3;

 if (VAR_2) {
  VAR_2 = 0;

  if (VAR_10->sync & 0x1) {

   *(volatile unsigned short *)0xffff9202 = 0xffbf;
  } else {

   *(volatile unsigned short *)0xffff9202;
  }
  VAR_5.syncmode = VAR_10->sync;

  VAR_7.hht = VAR_10->hht;
  VAR_7.hbb = VAR_10->hbb;
  VAR_7.hbe = VAR_10->hbe;
  VAR_7.hdb = VAR_10->hdb;
  VAR_7.hde = VAR_10->hde;
  VAR_7.hss = VAR_10->hss;
  VAR_7.vft = VAR_10->vft;
  VAR_7.vbb = VAR_10->vbb;
  VAR_7.vbe = VAR_10->vbe;
  VAR_7.vdb = VAR_10->vdb;
  VAR_7.vde = VAR_10->vde;
  VAR_7.vss = VAR_10->vss;

  VAR_7.f_shift = 0;
  if (VAR_10->ste_mode) {
   VAR_7.st_shift = VAR_10->st_shift;
  } else {






   VAR_7.st_shift = 0;

   VAR_7.f_shift = VAR_10->f_shift;
  }

  VAR_7.xoffset = VAR_10->xoffset;
  VAR_6 = VAR_10->line_width;
  VAR_6 = VAR_10->line_offset;
  VAR_7.control = VAR_10->vid_control;
  VAR_7.mode = VAR_10->vid_mode;
 }
 if (VAR_4) {
  VAR_4 = 0;
  VAR_7.xoffset = VAR_1.hw.falcon.xoffset;
  VAR_6 = VAR_1.hw.falcon.line_offset;
 }
 return VAR_0;
}
