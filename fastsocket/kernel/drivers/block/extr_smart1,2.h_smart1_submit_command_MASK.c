
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ io_mem_addr; } ;
typedef TYPE_2__ ctlr_info_t ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_8__ {int size; int busaddr; TYPE_1__ hdr; } ;
typedef TYPE_3__ cmdlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(ctlr_info_t *VAR_6, cmdlist_t *VAR_7)
{




 VAR_7->hdr.size = 0;

 FUNC_0(VAR_1, VAR_6->io_mem_addr + VAR_5);

 FUNC_1(VAR_7->busaddr, VAR_6->io_mem_addr + VAR_2);
 FUNC_2(VAR_7->size, VAR_6->io_mem_addr + VAR_3);

 FUNC_0(VAR_0, VAR_6->io_mem_addr + VAR_4);
}
