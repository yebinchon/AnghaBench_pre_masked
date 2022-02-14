
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ io_mem_addr; } ;
typedef TYPE_1__ ctlr_info_t ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(ctlr_info_t *VAR_2)
{
 unsigned char VAR_3;
 VAR_3 = FUNC_0(VAR_2->io_mem_addr + VAR_1) & VAR_0;
 return VAR_3;
}
