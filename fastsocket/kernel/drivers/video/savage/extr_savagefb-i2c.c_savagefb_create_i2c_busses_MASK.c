
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int getscl; int getsda; int setscl; int setsda; } ;
struct TYPE_8__ {int reg; struct savagefb_par* par; TYPE_3__ algo; int ioaddr; } ;
struct TYPE_6__ {int vbase; } ;
struct savagefb_par {TYPE_4__ chan; TYPE_2__ mmio; } ;
struct TYPE_5__ {int accel; } ;
struct fb_info {TYPE_1__ fix; struct savagefb_par* par; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_4__*,char*) ;

void FUNC_1(struct fb_info *VAR_9)
{
 struct savagefb_par *VAR_10 = VAR_9->par;
 VAR_10->chan.par = VAR_10;

 switch(VAR_9->fix.accel) {
 case 131:
 case 130:
  VAR_10->chan.reg = VAR_0;
  VAR_10->chan.ioaddr = VAR_10->mmio.vbase;
  VAR_10->chan.algo.setsda = VAR_4;
  VAR_10->chan.algo.setscl = VAR_3;
  VAR_10->chan.algo.getsda = VAR_2;
  VAR_10->chan.algo.getscl = VAR_1;
  break;
 case 128:
 case 129:
  VAR_10->chan.reg = 0xff20;
  VAR_10->chan.ioaddr = VAR_10->mmio.vbase;
  VAR_10->chan.algo.setsda = VAR_8;
  VAR_10->chan.algo.setscl = VAR_7;
  VAR_10->chan.algo.getsda = VAR_6;
  VAR_10->chan.algo.getscl = VAR_5;
  break;
 default:
  VAR_10->chan.par = ((void*)0);
 }

 FUNC_0(&VAR_10->chan, "SAVAGE DDC2");
}
