
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int start; scalar_t__ addr; } ;
struct TYPE_4__ {int slc0_rx_rst; } ;
struct TYPE_6__ {TYPE_2__ slc0_rx_link; TYPE_1__ conf0; } ;


 TYPE_3__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(const void* VAR_1)
{

    VAR_0.conf0.slc0_rx_rst = 1;
    VAR_0.conf0.slc0_rx_rst = 0;
    VAR_0.slc0_rx_link.addr = (uint32_t)VAR_1;
    VAR_0.slc0_rx_link.start = 1;
}
