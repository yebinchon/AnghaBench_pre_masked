
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ io_mem_addr; scalar_t__ io_mem_length; } ;
typedef TYPE_1__ ctlr_info_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(ctlr_info_t *VAR_0)
{

 if( VAR_0->io_mem_addr == 0)
  return;
 FUNC_0(VAR_0->io_mem_addr, VAR_0->io_mem_length);
 VAR_0->io_mem_addr = 0;
 VAR_0->io_mem_length = 0;
}
