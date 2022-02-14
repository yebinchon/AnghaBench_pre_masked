
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ command_pos; } ;
struct atmel_private {TYPE_1__ host_info; } ;



__attribute__((used)) static inline u16 FUNC_0(struct atmel_private *VAR_0, u16 VAR_1)
{
 return VAR_0->host_info.command_pos + VAR_1;
}
