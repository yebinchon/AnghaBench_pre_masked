
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; struct dt9812_usb_cmd* address; } ;
struct TYPE_6__ {TYPE_1__ read_multi_info; } ;
struct dt9812_usb_cmd {TYPE_2__ u; int cmd; } ;
typedef struct dt9812_usb_cmd u8 ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {int addr; } ;
struct usb_dt9812 {TYPE_4__ command_read; int udev; TYPE_3__ command_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct dt9812_usb_cmd*,int,int*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_dt9812 *VAR_2, int VAR_3,
       u8 * VAR_4, u8 * VAR_5)
{
 struct dt9812_usb_cmd VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_6.cmd = FUNC_0(VAR_0);
 VAR_6.u.read_multi_info.count = VAR_3;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_6.u.read_multi_info.address[VAR_7] = VAR_4[VAR_7];


 VAR_8 = 32;
 VAR_9 = FUNC_1(VAR_2->udev,
         FUNC_3(VAR_2->udev,
           VAR_2->command_write.addr),
         &VAR_6, 32, &VAR_8, VAR_1 * 1);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_2->udev,
         FUNC_2(VAR_2->udev,
           VAR_2->command_read.addr),
         VAR_5, VAR_3, &VAR_8, VAR_1 * 1);
 return VAR_9;
}
