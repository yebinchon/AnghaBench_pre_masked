
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int u_char ;
struct mtd_info {int dummy; } ;
struct TYPE_4__ {int* index_of; int nn; int* alpha_to; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ FUNC_1 (unsigned short volatile) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*,int*,int,int*,int ,int *,int,int *) ;
 TYPE_1__* VAR_4 ;
 size_t FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_6, const u_char *VAR_7, u_char *VAR_8, u_char *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 unsigned short VAR_13;
 uint16_t VAR_14[6], VAR_15[6];
 uint8_t VAR_16[8];
 volatile unsigned short *VAR_17;

 VAR_13 = *((volatile unsigned short *)(VAR_5 + VAR_2));

 if (!(VAR_13 & VAR_3)) {
  return 0;
 }


 VAR_17 = (volatile unsigned short *)(VAR_5 + VAR_1);
 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  VAR_16[VAR_10] = FUNC_1(*VAR_17);
  VAR_17++;
 }


 VAR_14[5] = VAR_4->index_of[(((uint16_t) VAR_16[0] >> 0) & 0x0ff) | (((uint16_t) VAR_16[1] << 8) & 0x300)];
 VAR_14[4] = VAR_4->index_of[(((uint16_t) VAR_16[1] >> 2) & 0x03f) | (((uint16_t) VAR_16[2] << 6) & 0x3c0)];
 VAR_14[3] = VAR_4->index_of[(((uint16_t) VAR_16[2] >> 4) & 0x00f) | (((uint16_t) VAR_16[3] << 4) & 0x3f0)];
 VAR_14[2] = VAR_4->index_of[(((uint16_t) VAR_16[3] >> 6) & 0x003) | (((uint16_t) VAR_16[4] << 2) & 0x3fc)];
 VAR_14[1] = VAR_4->index_of[(((uint16_t) VAR_16[5] >> 0) & 0x0ff) | (((uint16_t) VAR_16[6] << 8) & 0x300)];
 VAR_14[0] = (((uint16_t) VAR_16[6] >> 2) & 0x03f) | (((uint16_t) VAR_16[7] << 6) & 0x3c0);


 for (VAR_10 = 0; VAR_10 < 6; VAR_10++) {
  VAR_15[VAR_10] = VAR_14[0];
  for (VAR_11 = 1; VAR_11 < 6; VAR_11++)
   if (VAR_14[VAR_11] != VAR_4->nn)
    VAR_15[VAR_10] ^= VAR_4->alpha_to[FUNC_3(VAR_4, VAR_14[VAR_11] + VAR_10 * VAR_11)];


  VAR_15[VAR_10] = VAR_4->index_of[VAR_15[VAR_10]];
 }


 VAR_12 = FUNC_2(VAR_4, (uint8_t *) VAR_7, VAR_14, 512, VAR_15, 0, ((void*)0), 0xff, ((void*)0));
 if (VAR_12 > 0) {
  FUNC_0(VAR_0, "rtc_from4_correct_data: " "ECC corrected %d errors on read\n", VAR_12);
 }
 return VAR_12;
}
