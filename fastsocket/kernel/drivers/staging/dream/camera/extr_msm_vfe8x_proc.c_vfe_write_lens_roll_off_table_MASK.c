
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct vfe_cmd_roll_off_config {scalar_t__* deltaTableR; scalar_t__* deltaTableB; scalar_t__* deltaTableGb; scalar_t__* deltaTableGr; scalar_t__* initTableR; scalar_t__* initTableB; scalar_t__* initTableGb; scalar_t__* initTableGr; } ;
typedef int int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(
 struct vfe_cmd_roll_off_config *VAR_9)
{
 uint16_t VAR_10;
 uint32_t VAR_11;

 uint16_t *VAR_12 = VAR_9->initTableGr;
 uint16_t *VAR_13 = VAR_9->initTableGb;
 uint16_t *VAR_14 = VAR_9->initTableB;
 uint16_t *VAR_15 = VAR_9->initTableR;

 int16_t *VAR_16 = VAR_9->deltaTableGr;
 int16_t *VAR_17 = VAR_9->deltaTableGb;
 int16_t *VAR_18 = VAR_9->deltaTableB;
 int16_t *VAR_19 = VAR_9->deltaTableR;

 FUNC_0(VAR_1);


 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_11 = (((uint32_t)(*VAR_15)) & 0x0000FFFF) |
   (((uint32_t)(*VAR_12)) << 16);
  VAR_15++;
  VAR_12++;

  FUNC_1(VAR_11, VAR_8->vfebase + VAR_5);

  VAR_11 = (((uint32_t)(*VAR_14)) & 0x0000FFFF) |
   (((uint32_t)(*VAR_12))<<16);
  VAR_14++;
  VAR_13++;

  FUNC_1(VAR_11, VAR_8->vfebase + VAR_5);
 }



 FUNC_1(VAR_0,
  VAR_8->vfebase + VAR_2);


 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_11 = (((int32_t)(*VAR_19)) & 0x0000FFFF) |
   (((int32_t)(*VAR_16))<<16);
  VAR_19++;
  VAR_16++;

  FUNC_1(VAR_11, VAR_8->vfebase + VAR_5);

  VAR_11 = (((int32_t)(*VAR_18)) & 0x0000FFFF) |
   (((int32_t)(*VAR_17))<<16);
  VAR_18++;
  VAR_17++;

  FUNC_1(VAR_11, VAR_8->vfebase + VAR_5);
 }





 FUNC_1(VAR_4, VAR_8->vfebase + VAR_3);
}
