
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct biosregs {int ax; int bh; } ;
struct TYPE_4__ {scalar_t__ rsvd_pos; scalar_t__ blue_pos; scalar_t__ green_pos; scalar_t__ red_pos; void* rsvd_size; void* blue_size; void* green_size; void* red_size; } ;
struct TYPE_6__ {TYPE_1__ screen_info; } ;
struct TYPE_5__ {int capabilities; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct biosregs VAR_2, VAR_3;
 u8 VAR_4 = 6;


 if (VAR_1.capabilities & 1) {
  FUNC_0(&VAR_2);
  VAR_2.ax = 0x4f08;
  VAR_2.bh = 0x08;
  FUNC_1(0x10, &VAR_2, &VAR_3);
  if (VAR_3.ax == 0x004f)
   VAR_4 = VAR_3.bh;
 }


 VAR_0.screen_info.red_size = VAR_4;
 VAR_0.screen_info.green_size = VAR_4;
 VAR_0.screen_info.blue_size = VAR_4;
 VAR_0.screen_info.rsvd_size = VAR_4;

 VAR_0.screen_info.red_pos = 0;
 VAR_0.screen_info.green_pos = 0;
 VAR_0.screen_info.blue_pos = 0;
 VAR_0.screen_info.rsvd_pos = 0;
}
