
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static void FUNC_2(u16 *VAR_21)
{
 FUNC_0("   Identify Data Structure:\n");
 FUNC_0("      config = 0x%x\n", VAR_21[VAR_4]);
 FUNC_0("      cyls = 0x%x\n", VAR_21[VAR_8]);
 FUNC_0("      heads = 0x%x\n", VAR_21[VAR_12]);
 FUNC_0("      track_bytes = 0x%x\n", VAR_21[4]);
 FUNC_0("      sector_bytes = 0x%x\n", VAR_21[5]);
 FUNC_0("      sectors = 0x%x\n", VAR_21[VAR_19]);
 FUNC_0("      serial_no[0] = 0x%x\n", *(char *)&VAR_21[VAR_20]);
 FUNC_0("      buf_type = 0x%x\n", VAR_21[20]);
 FUNC_0("      buf_size = 0x%x\n", VAR_21[VAR_0]);
 FUNC_0("      ecc_bytes = 0x%x\n", VAR_21[22]);
 FUNC_0("      fw_rev[0] = 0x%x\n", *(char *)&VAR_21[VAR_11]);
 FUNC_0("      model[0] = 0x%x\n", *(char *)&VAR_21[VAR_18]);
 FUNC_0("      max_multsect = 0x%x\n", VAR_21[VAR_14] & 0xff);
 FUNC_0("      dword_io = 0x%x\n", VAR_21[VAR_9]);
 FUNC_0("      capability = 0x%x\n", VAR_21[VAR_1] >> 8);
 FUNC_0("      tPIO = 0x%x\n", VAR_21[VAR_17] >> 8);
 FUNC_0("      tDMA = 0x%x\n", VAR_21[VAR_16] >> 8);
 FUNC_0("      field_valid = 0x%x\n", VAR_21[VAR_10]);
 FUNC_0("      cur_cyls = 0x%x\n", VAR_21[VAR_5]);
 FUNC_0("      cur_heads = 0x%x\n", VAR_21[VAR_6]);
 FUNC_0("      cur_sectors = 0x%x\n", VAR_21[VAR_7]);
 FUNC_0("      cur_capacity = 0x%x\n", FUNC_1(VAR_21, 57));
 FUNC_0("      multsect = 0x%x\n", VAR_21[VAR_15] & 0xff);
 FUNC_0("      lba_capacity = 0x%x\n", FUNC_1(VAR_21, VAR_13));
 FUNC_0("      command_set_1 = 0x%x\n", VAR_21[VAR_2]);
 FUNC_0("      command_set_2 = 0x%x\n", VAR_21[VAR_3]);
}
