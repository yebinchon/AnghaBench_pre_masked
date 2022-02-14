
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct et131x_adapter {int dummy; } ;


 int FUNC_0 (struct et131x_adapter*,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_1(struct et131x_adapter *VAR_11,
     uint8_t *VAR_12,
     uint32_t *VAR_13,
     uint32_t *VAR_14,
     uint32_t *VAR_15,
     uint32_t *VAR_16,
     uint32_t *VAR_17, uint32_t *VAR_18)
{
 uint16_t VAR_19 = 0;
 uint16_t VAR_20 = 0;
 uint16_t VAR_21 = 0;
 uint16_t VAR_22 = 0;

 FUNC_0(VAR_11, VAR_3, &VAR_19);
 FUNC_0(VAR_11, VAR_0, &VAR_20);
 FUNC_0(VAR_11, VAR_2, &VAR_21);
 FUNC_0(VAR_11, VAR_1, &VAR_22);

 if (VAR_12) {
  *VAR_12 =
      (unsigned char)((VAR_21 & 0x0040) ? 1 : 0);
 }

 if (VAR_13) {
  *VAR_13 =
      (VAR_22 & 0x1000) ? ((VAR_21 & 0x0020) ?
         VAR_4 :
         VAR_6) :
      VAR_5;
 }

 if (VAR_14)
  *VAR_14 = (VAR_21 & 0x0300) >> 8;

 if (VAR_15)
  *VAR_15 = (VAR_21 & 0x0080) >> 7;

 if (VAR_16)

  *VAR_16 = 0;

 if (VAR_17) {
  *VAR_17 =
      (VAR_20 & 0x4000) ? VAR_7 :
      VAR_8;
 }

 if (VAR_18) {
  *VAR_18 =
      (VAR_21 & 0x0400) ? VAR_9 :
      VAR_10;
 }
}
