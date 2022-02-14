
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ps3_firmware_version {scalar_t__ raw; void* rev; void* minor; void* major; scalar_t__ pad; } ;
typedef void* u16 ;
struct TYPE_2__ {scalar_t__ raw; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0(u16 VAR_1, u16 VAR_2, u16 VAR_3)
{
 union ps3_firmware_version VAR_4;

 VAR_4.pad = 0;
 VAR_4.major = VAR_1;
 VAR_4.minor = VAR_2;
 VAR_4.rev = VAR_3;

 return (VAR_0.raw > VAR_4.raw) -
        (VAR_0.raw < VAR_4.raw);
}
