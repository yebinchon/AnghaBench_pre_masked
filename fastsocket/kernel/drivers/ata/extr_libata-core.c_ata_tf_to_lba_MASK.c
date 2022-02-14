
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ata_taskfile {int device; int lbah; int lbam; int lbal; } ;



u64 FUNC_0(const struct ata_taskfile *VAR_0)
{
 u64 VAR_1 = 0;

 VAR_1 |= (VAR_0->device & 0x0f) << 24;
 VAR_1 |= (VAR_0->lbah & 0xff) << 16;
 VAR_1 |= (VAR_0->lbam & 0xff) << 8;
 VAR_1 |= (VAR_0->lbal & 0xff);

 return VAR_1;
}
