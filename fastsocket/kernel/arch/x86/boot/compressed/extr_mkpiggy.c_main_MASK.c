
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint32_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (long*,int,int,int *) ;
 scalar_t__ FUNC_4 (int *,long,int ) ;
 long FUNC_5 (int *) ;
 long FUNC_6 (long*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int VAR_1 ;

int FUNC_9(int VAR_2, char *VAR_3[])
{
 uint32_t VAR_4;
 long VAR_5;
 unsigned long VAR_6;
 FILE *VAR_7;

 if (VAR_2 < 2) {
  FUNC_2(VAR_1, "Usage: %s compressed_file\n", VAR_3[0]);
  return 1;
 }



 VAR_7 = FUNC_1(VAR_3[1], "r");
 if (!VAR_7) {
  FUNC_7(VAR_3[1]);
  return 1;
 }


 if (FUNC_4(VAR_7, -4L, VAR_0)) {
  FUNC_7(VAR_3[1]);
 }
 FUNC_3(&VAR_4, sizeof VAR_4, 1, VAR_7);
 VAR_5 = FUNC_5(VAR_7);
 VAR_4 = FUNC_6(&VAR_4);
 FUNC_0(VAR_7);






 VAR_6 = (VAR_4 > VAR_5) ? VAR_4 - VAR_5 : 0;
 VAR_6 += VAR_4 >> 12;
 VAR_6 += 32*1024 + 18;
 VAR_6 = (VAR_6+4095) & ~4095;

 FUNC_8(".section \".rodata.compressed\",\"a\",@progbits\n");
 FUNC_8(".globl z_input_len\n");
 FUNC_8("z_input_len = %lu\n", VAR_5);
 FUNC_8(".globl z_output_len\n");
 FUNC_8("z_output_len = %lu\n", (unsigned long)VAR_4);
 FUNC_8(".globl z_extract_offset\n");
 FUNC_8("z_extract_offset = 0x%lx\n", VAR_6);

 FUNC_8(".globl z_extract_offset_negative\n");
 FUNC_8("z_extract_offset_negative = -0x%lx\n", VAR_6);

 FUNC_8(".globl input_data, input_data_end\n");
 FUNC_8("input_data:\n");
 FUNC_8(".incbin \"%s\"\n", VAR_3[1]);
 FUNC_8("input_data_end:\n");

 return 0;
}
