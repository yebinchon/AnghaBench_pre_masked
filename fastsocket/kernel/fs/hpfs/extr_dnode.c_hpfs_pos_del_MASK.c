
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loff_t ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void FUNC_1(loff_t *VAR_0, loff_t VAR_1, loff_t VAR_2)
{
 if ((*VAR_0 & ~0x3f) == (VAR_1 & ~0x3f) && (*VAR_0 & 0x3f) >= (VAR_1 & 0x3f)) {
  int VAR_3 = (*VAR_0 & 0x3f) - VAR_2;
  if (VAR_3 < 1) FUNC_0("HPFS: hpfs_pos_ins: %08x - %d\n", (int)*VAR_0, (int)VAR_2 >> 8);
  else *VAR_0 = (*VAR_0 & ~0x3f) | VAR_3;
 }
}
