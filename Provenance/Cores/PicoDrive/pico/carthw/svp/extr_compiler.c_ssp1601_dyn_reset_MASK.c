
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_7__ {int iram_dirty; void* ptr_btable_iram; void* ptr_btable; void* ptr_dram; void* ptr_iram_rom; void* ptr_rom; scalar_t__ iram_context; } ;
struct TYPE_8__ {TYPE_1__ drc; } ;
typedef TYPE_2__ ssp1601_t ;
struct TYPE_10__ {scalar_t__ rom; } ;
struct TYPE_9__ {scalar_t__ iram_rom; scalar_t__ dram; } ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;

void FUNC_2(ssp1601_t *VAR_4)
{
 FUNC_1(VAR_4);
 VAR_4->drc.iram_dirty = 1;
 VAR_4->drc.iram_context = 0;

 VAR_4->drc.ptr_rom = (u32) VAR_0.rom;
 VAR_4->drc.ptr_iram_rom = (u32) VAR_3->iram_rom;
 VAR_4->drc.ptr_dram = (u32) VAR_3->dram;
 VAR_4->drc.ptr_btable = (u32) VAR_1;
 VAR_4->drc.ptr_btable_iram = (u32) VAR_2;


 FUNC_0(VAR_3->iram_rom, 0, 0x800);
}
