
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct ihex_binrec {int len; int addr; int* data; } ;
typedef int ssize_t ;
typedef int data32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ihex_binrec*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 struct ihex_binrec* FUNC_4 (int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (struct ihex_binrec*,int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_7(uint8_t *VAR_5, ssize_t VAR_6)
{
 struct ihex_binrec *VAR_7;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9;
 uint8_t VAR_10, VAR_11 = 0, VAR_12 = 0;
 int VAR_13, VAR_14;
 int VAR_15 = 1;
 int VAR_16;

 VAR_13 = 0;
next_record:

 while (VAR_13 < VAR_6) {
  if (VAR_5[VAR_13] == '\n') VAR_15++;
  if (VAR_5[VAR_13++] == ':') break;
 }


 if (VAR_13 + 10 > VAR_6) {
  FUNC_1(VAR_3, "Can't find valid record at line %d\n", VAR_15);
  return -VAR_0;
 }

 VAR_16 = FUNC_2(VAR_5 + VAR_13, &VAR_11); VAR_13 += 2;
 if (VAR_4) {
  VAR_16 <<= 8;
  VAR_16 += FUNC_2(VAR_5 + VAR_13, &VAR_11); VAR_13 += 2;
 }
 VAR_7 = FUNC_4((sizeof (*VAR_7) + VAR_16 + 3) & ~3);
 if (!VAR_7) {
  FUNC_1(VAR_3, "out of memory for records\n");
  return -VAR_1;
 }
 FUNC_6(VAR_7, 0, (sizeof(*VAR_7) + VAR_16 + 3) & ~3);
 VAR_7->len = VAR_16;


 if (VAR_13 + 8 + (VAR_7->len * 2) > VAR_6) {
  FUNC_1(VAR_3, "Not enough data to read complete record at line %d\n",
   VAR_15);
  return -VAR_0;
 }

 VAR_7->addr = FUNC_2(VAR_5 + VAR_13, &VAR_11) << 8; VAR_13 += 2;
 VAR_7->addr |= FUNC_2(VAR_5 + VAR_13, &VAR_11); VAR_13 += 2;
 VAR_10 = FUNC_2(VAR_5 + VAR_13, &VAR_11); VAR_13 += 2;

 for (VAR_14 = 0; VAR_14 < VAR_7->len; VAR_14++, VAR_13 += 2)
  VAR_7->data[VAR_14] = FUNC_2(VAR_5 + VAR_13, &VAR_11);


 VAR_12 = FUNC_2(VAR_5 + VAR_13, &VAR_11); VAR_13 += 2;
 if (VAR_11 != 0) {
  FUNC_1(VAR_3, "CRC failure at line %d: got 0x%X, expected 0x%X\n",
   VAR_15, VAR_12, (unsigned char)(VAR_12-VAR_11));
  return -VAR_0;
 }


 switch (VAR_10) {
 case 0:

  if (!VAR_7->len)
   break;

  VAR_7->addr += VAR_8;
  FUNC_0(VAR_7);
  goto next_record;

 case 1:
  if (VAR_7->addr || VAR_7->len) {
   FUNC_1(VAR_3, "Bad EOF record (type 01) format at line %d",
    VAR_15);
   return -VAR_0;
  }
  break;

 case 2:
 case 4:
  if (VAR_7->addr || VAR_7->len != 2) {
   FUNC_1(VAR_3, "Bad HEX86/HEX386 record (type %02X) at line %d\n",
    VAR_10, VAR_15);
   return -VAR_0;
  }



  VAR_8 = VAR_7->data[0] << 8 | VAR_7->data[1];
  VAR_8 <<= (VAR_10 == 2 ? 4 : 16);
  goto next_record;

 case 3:
 case 5:
  if (VAR_7->addr || VAR_7->len != 4) {
   FUNC_1(VAR_3, "Bad Start Address record (type %02X) at line %d\n",
    VAR_10, VAR_15);
   return -VAR_0;
  }

  FUNC_5(&VAR_9, &VAR_7->data[0], sizeof(VAR_9));
  VAR_9 = FUNC_3(VAR_9);
  FUNC_5(&VAR_7->data[0], &VAR_9, sizeof(VAR_9));



  if (VAR_2)
   FUNC_0(VAR_7);
  goto next_record;

 default:
  FUNC_1(VAR_3, "Unknown record (type %02X)\n", VAR_10);
  return -VAR_0;
 }

 return 0;
}
