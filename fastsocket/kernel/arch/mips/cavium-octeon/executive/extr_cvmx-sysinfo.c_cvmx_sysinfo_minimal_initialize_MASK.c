
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int cpu_clock_hz; void* board_rev_minor; void* board_rev_major; scalar_t__ board_type; void* phy_mem_desc_ptr; } ;
struct TYPE_3__ {TYPE_2__ sysinfo; } ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(void *VAR_1,
        uint16_t VAR_2,
        uint8_t VAR_3,
        uint8_t VAR_4,
        uint32_t VAR_5)
{


 if (VAR_0.sysinfo.board_type)
  return 0;

 FUNC_0(&(VAR_0.sysinfo), 0x0, sizeof(VAR_0.sysinfo));
 VAR_0.sysinfo.phy_mem_desc_ptr = VAR_1;
 VAR_0.sysinfo.board_type = VAR_2;
 VAR_0.sysinfo.board_rev_major = VAR_3;
 VAR_0.sysinfo.board_rev_minor = VAR_4;
 VAR_0.sysinfo.cpu_clock_hz = VAR_5;

 return 1;
}
