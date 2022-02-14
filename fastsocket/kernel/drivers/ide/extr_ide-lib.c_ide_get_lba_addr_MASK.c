
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ide_taskfile {int lbah; int lbam; int lbal; int device; } ;
struct ide_cmd {struct ide_taskfile hob; struct ide_taskfile tf; } ;



u64 FUNC_0(struct ide_cmd *VAR_0, int VAR_1)
{
 struct ide_taskfile *VAR_2 = &VAR_0->tf;
 u32 VAR_3, VAR_4;

 VAR_4 = (VAR_2->lbah << 16) | (VAR_2->lbam << 8) | VAR_2->lbal;
 if (VAR_1) {
  VAR_2 = &VAR_0->hob;
  VAR_3 = (VAR_2->lbah << 16) | (VAR_2->lbam << 8) | VAR_2->lbal;
 } else
  VAR_3 = VAR_2->device & 0xf;

 return ((u64)VAR_3 << 24) | VAR_4;
}
