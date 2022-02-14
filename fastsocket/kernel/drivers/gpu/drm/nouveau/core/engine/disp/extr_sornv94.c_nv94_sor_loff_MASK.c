
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int link; } ;
struct dcb_output {TYPE_1__ sorconf; } ;


 scalar_t__ FUNC_0 (struct dcb_output*) ;

__attribute__((used)) static inline u32
FUNC_1(struct dcb_output *VAR_0)
{
 return FUNC_0(VAR_0) + !(VAR_0->sorconf.link & 1) * 0x80;
}
