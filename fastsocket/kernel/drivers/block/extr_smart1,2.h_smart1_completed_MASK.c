
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ io_mem_addr; } ;
typedef TYPE_3__ ctlr_info_t ;
struct TYPE_6__ {unsigned char rcode; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
struct TYPE_9__ {TYPE_2__ req; } ;
typedef TYPE_4__ cmdlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_4(ctlr_info_t *VAR_6)
{
 unsigned char VAR_7;
 unsigned long VAR_8;

 if (FUNC_1(VAR_6->io_mem_addr + VAR_5) & VAR_0) {
  FUNC_3(VAR_0, VAR_6->io_mem_addr + VAR_5);

  VAR_8 = FUNC_2(VAR_6->io_mem_addr + VAR_2);
  VAR_7 = FUNC_1(VAR_6->io_mem_addr + VAR_3);

  FUNC_3(VAR_1, VAR_6->io_mem_addr + VAR_4);




  if (VAR_8) ((cmdlist_t*)FUNC_0(VAR_8))->req.hdr.rcode = VAR_7;
 } else {
  VAR_8 = 0;
 }
 return VAR_8;
}
