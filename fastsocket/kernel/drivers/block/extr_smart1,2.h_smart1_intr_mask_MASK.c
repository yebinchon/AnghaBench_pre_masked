
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ io_mem_addr; } ;
typedef TYPE_1__ ctlr_info_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(ctlr_info_t *VAR_5, unsigned long VAR_6)
{
 if (VAR_6 == 1) {
  FUNC_0(0xFD, VAR_5->io_mem_addr + VAR_3);
  FUNC_0(VAR_0, VAR_5->io_mem_addr + VAR_2);
  FUNC_0(0x01, VAR_5->io_mem_addr + VAR_1);
  FUNC_0(0x01, VAR_5->io_mem_addr + VAR_4);
 } else {
  FUNC_0(0, VAR_5->io_mem_addr + 0xC8E);
 }
}
