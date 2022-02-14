
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_6__ {int dn; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ const VAR_5 ;
 scalar_t__ const VAR_6 ;
 scalar_t__ const VAR_7 ;
 scalar_t__ const VAR_8 ;
 scalar_t__ const VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_14, const u8 VAR_15)
{
 u32 VAR_16 = 0, VAR_17;
 u8 VAR_18 = VAR_14->dn & 1;


 if (VAR_15 < VAR_7) {
  ide_drive_t *VAR_19 = FUNC_1(VAR_14);
  u8 VAR_20, VAR_21;

  VAR_20 = VAR_21 = VAR_15 - VAR_6;

  if (VAR_19) {
   u8 VAR_22 = FUNC_0(VAR_19, 255, 4);

   if (VAR_22 < VAR_20)
    VAR_20 = VAR_22;
  }


  VAR_16 = (VAR_11[VAR_20] << 16) |
   VAR_12[VAR_21];
  FUNC_3(VAR_18 ? VAR_3 : VAR_1, VAR_16, 0);


  FUNC_2(VAR_18 ? VAR_1 : VAR_3, VAR_16, VAR_17);

  if (((VAR_16 >> 16) & VAR_11[VAR_20]) !=
   VAR_11[VAR_20]) {
   VAR_16 &= 0x0000FFFF;
   VAR_16 |= VAR_11[VAR_20] << 16;
   FUNC_3(VAR_18 ? VAR_1 : VAR_3, VAR_16, 0);
  }


  FUNC_2(VAR_18 ? VAR_2 : VAR_0, VAR_16, VAR_17);
  FUNC_3(VAR_18 ? VAR_2 : VAR_0,
     VAR_16 | 0x80000000UL, 0);
 } else {
  FUNC_2(VAR_18 ? VAR_2 : VAR_0, VAR_16, VAR_17);

  VAR_16 &= 0x80000000UL;

  if (VAR_15 >= VAR_8 && VAR_15 <= VAR_9)
   VAR_16 |= VAR_13[VAR_15 - VAR_8];
  else if (VAR_15 >= VAR_4 && VAR_15 <= VAR_5)
   VAR_16 |= VAR_10[VAR_15 - VAR_4];
  else
   return;

  FUNC_3(VAR_18 ? VAR_2 : VAR_0, VAR_16, 0);
 }
}
