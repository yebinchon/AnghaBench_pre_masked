
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr; } ;
struct usb_dt9812 {TYPE_1__ command_write; int udev; } ;
struct TYPE_5__ {int count; struct dt9812_rmw_byte* rmw; } ;
struct TYPE_6__ {TYPE_2__ rmw_multi_info; } ;
struct dt9812_usb_cmd {TYPE_3__ u; int cmd; } ;
struct dt9812_rmw_byte {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct dt9812_usb_cmd*,int,int*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_dt9812 *VAR_2, int VAR_3,
      struct dt9812_rmw_byte *VAR_4)
{
 struct dt9812_usb_cmd VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_5.cmd = FUNC_0(VAR_0);
 VAR_5.u.rmw_multi_info.count = VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_5.u.rmw_multi_info.rmw[VAR_6] = VAR_4[VAR_6];


 VAR_8 = FUNC_1(VAR_2->udev,
         FUNC_2(VAR_2->udev,
           VAR_2->command_write.addr),
         &VAR_5, 32, &VAR_7, VAR_1 * 1);
 return VAR_8;
}
