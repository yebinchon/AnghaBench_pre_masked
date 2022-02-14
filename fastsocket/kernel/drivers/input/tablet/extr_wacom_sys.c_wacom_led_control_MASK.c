
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* select; int llv; unsigned char hlv; unsigned char img_lum; } ;
struct wacom {int intf; TYPE_3__ led; TYPE_2__* wacom_wac; } ;
struct TYPE_5__ {TYPE_1__* features; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,unsigned char,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct wacom *VAR_8)
{
 unsigned char *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(9, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_8->wacom_wac->features->type >= VAR_3 &&
     VAR_8->wacom_wac->features->type <= VAR_2) {





  int VAR_11 = VAR_8->led.select[0] & 0x03;
  int VAR_12 = (((VAR_8->led.llv & 0x60) >> 5) - 1) & 0x03;
  int VAR_13 = 0;

  VAR_9[0] = VAR_6;
  VAR_9[1] = (VAR_13 << 4) | (VAR_12 << 2) | (VAR_11);
 }
 else {
  int VAR_14 = VAR_8->led.select[0] | 0x4;

  if (VAR_8->wacom_wac->features->type == VAR_4 ||
      VAR_8->wacom_wac->features->type == VAR_5)
   VAR_14 |= (VAR_8->led.select[1] << 4) | 0x40;

  VAR_9[0] = VAR_6;
  VAR_9[1] = VAR_14;
  VAR_9[2] = VAR_8->led.llv;
  VAR_9[3] = VAR_8->led.hlv;
  VAR_9[4] = VAR_8->led.img_lum;
 }

 VAR_10 = FUNC_2(VAR_8->intf, 0x03, VAR_6,
      VAR_9, 9, VAR_7);
 FUNC_0(VAR_9);

 return VAR_10;
}
