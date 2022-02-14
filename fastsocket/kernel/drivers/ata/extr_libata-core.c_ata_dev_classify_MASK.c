
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {int lbam; int lbah; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (char*) ;

unsigned int FUNC_1(const struct ata_taskfile *VAR_5)
{
 if ((VAR_5->lbam == 0) && (VAR_5->lbah == 0)) {
  FUNC_0("found ATA device by sig\n");
  return VAR_0;
 }

 if ((VAR_5->lbam == 0x14) && (VAR_5->lbah == 0xeb)) {
  FUNC_0("found ATAPI device by sig\n");
  return VAR_1;
 }

 if ((VAR_5->lbam == 0x69) && (VAR_5->lbah == 0x96)) {
  FUNC_0("found PMP device by sig\n");
  return VAR_2;
 }

 if ((VAR_5->lbam == 0x3c) && (VAR_5->lbah == 0xc3)) {
  FUNC_0("found SEMB device by sig (could be ATA device)\n");
  return VAR_3;
 }

 FUNC_0("unknown device\n");
 return VAR_4;
}
