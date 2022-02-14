
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct av7110 {unsigned char* bin_fw; unsigned char* bin_dpram; int size_dpram; int size_fw; unsigned char* bin_root; int size_root; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct av7110* VAR_1)
{
 u32 VAR_2 = 0, VAR_3 = 0;
 unsigned char *VAR_4;


 VAR_4 = VAR_1->bin_fw;
 if (VAR_4[0] != 'A' || VAR_4[1] != 'V' ||
     VAR_4[2] != 'F' || VAR_4[3] != 'W') {
  FUNC_2("dvb-ttpci: this is not an av7110 firmware\n");
  return -VAR_0;
 }
 VAR_4 += 4;


 VAR_2 = FUNC_1(VAR_4);
 VAR_4 += 4;
 VAR_3 = FUNC_1(VAR_4);
 VAR_4 += 4;
 if (VAR_3 >= 512) {
  FUNC_2("dvb-ttpci: dpram file is way too big.\n");
  return -VAR_0;
 }
 if (VAR_2 != FUNC_0(0, VAR_4, VAR_3)) {
  FUNC_2("dvb-ttpci: crc32 of dpram file does not match.\n");
  return -VAR_0;
 }
 VAR_1->bin_dpram = VAR_4;
 VAR_1->size_dpram = VAR_3;
 VAR_4 += VAR_3;


 VAR_2 = FUNC_1(VAR_4);
 VAR_4 += 4;
 VAR_3 = FUNC_1(VAR_4);
 VAR_4 += 4;

 if (VAR_3 <= 200000 || VAR_3 >= 300000 ||
     VAR_3 > ((VAR_1->bin_fw + VAR_1->size_fw) - VAR_4)) {
  FUNC_2("dvb-ttpci: root file has strange size (%d). aborting.\n", VAR_3);
  return -VAR_0;
 }
 if( VAR_2 != FUNC_0(0, VAR_4, VAR_3)) {
  FUNC_2("dvb-ttpci: crc32 of root file does not match.\n");
  return -VAR_0;
 }
 VAR_1->bin_root = VAR_4;
 VAR_1->size_root = VAR_3;
 return 0;
}
