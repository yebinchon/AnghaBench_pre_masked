
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
struct TYPE_4__ {TYPE_1__* fileinfo; void** transfileinfo; } ;
struct TYPE_3__ {int lba; int size; void* flags; void* fileunitsize; void* interleavegapsize; } ;


 TYPE_2__* VAR_0 ;

void FUNC_0(u32 VAR_1) {
  VAR_0->transfileinfo[0] = (u8)(VAR_0->fileinfo[VAR_1].lba >> 24);
  VAR_0->transfileinfo[1] = (u8)(VAR_0->fileinfo[VAR_1].lba >> 16);
  VAR_0->transfileinfo[2] = (u8)(VAR_0->fileinfo[VAR_1].lba >> 8);
  VAR_0->transfileinfo[3] = (u8)VAR_0->fileinfo[VAR_1].lba;

  VAR_0->transfileinfo[4] = (u8)(VAR_0->fileinfo[VAR_1].size >> 24);
  VAR_0->transfileinfo[5] = (u8)(VAR_0->fileinfo[VAR_1].size >> 16);
  VAR_0->transfileinfo[6] = (u8)(VAR_0->fileinfo[VAR_1].size >> 8);
  VAR_0->transfileinfo[7] = (u8)VAR_0->fileinfo[VAR_1].size;

  VAR_0->transfileinfo[8] = VAR_0->fileinfo[VAR_1].interleavegapsize;
  VAR_0->transfileinfo[9] = VAR_0->fileinfo[VAR_1].fileunitsize;
  VAR_0->transfileinfo[10] = (u8) VAR_1;
  VAR_0->transfileinfo[11] = VAR_0->fileinfo[VAR_1].flags;
}
