
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int isoc_reqs; int sb_type; int nb_type; int nb_dev; int smbus_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
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
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(int VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18 = VAR_13 ? 0 : 1;
 unsigned long VAR_19;

 FUNC_10(&VAR_12, VAR_19);

 if (VAR_13) {
  VAR_11.isoc_reqs++;
  if (VAR_11.isoc_reqs > 1) {
   FUNC_11(&VAR_12, VAR_19);
   return;
  }
 } else {
  VAR_11.isoc_reqs--;
  if (VAR_11.isoc_reqs > 0) {
   FUNC_11(&VAR_12, VAR_19);
   return;
  }
 }

 if (VAR_11.sb_type == 1 || VAR_11.sb_type == 2) {
  FUNC_5(VAR_1, 0xcd6);
  VAR_15 = FUNC_2(0xcd7);
  FUNC_5(VAR_0, 0xcd6);
  VAR_16 = FUNC_2(0xcd7);
  VAR_14 = VAR_16 << 8 | VAR_15;

  FUNC_7(0x30, FUNC_1(VAR_14));
  FUNC_7(0x40, FUNC_0(VAR_14));
  FUNC_7(0x34, FUNC_1(VAR_14));
  VAR_17 = FUNC_4(FUNC_0(VAR_14));
 } else if (VAR_11.sb_type == 3) {
  FUNC_8(VAR_11.smbus_dev,
     VAR_2, &VAR_14);
  FUNC_6(VAR_4, FUNC_1(VAR_14));
  FUNC_6(0x40, FUNC_0(VAR_14));
  FUNC_6(VAR_3, FUNC_1(VAR_14));
  VAR_17 = FUNC_3(FUNC_0(VAR_14));
 } else {
  FUNC_11(&VAR_12, VAR_19);
  return;
 }

 if (VAR_13) {
  VAR_17 &= ~0x08;
  VAR_17 |= (1 << 4) | (1 << 9);
 } else {
  VAR_17 |= 0x08;
  VAR_17 &= ~((1 << 4) | (1 << 9));
 }
 FUNC_7(VAR_17, FUNC_0(VAR_14));

 if (!VAR_11.nb_dev) {
  FUNC_11(&VAR_12, VAR_19);
  return;
 }

 if (VAR_11.nb_type == 1 || VAR_11.nb_type == 3) {
  VAR_14 = VAR_10;
  FUNC_9(VAR_11.nb_dev,
     VAR_6, VAR_14);
  FUNC_8(VAR_11.nb_dev,
     VAR_7, &VAR_17);

  VAR_17 &= ~(1 | (1 << 3) | (1 << 4) | (1 << 9) | (1 << 12));
  VAR_17 |= VAR_18 | (VAR_18 << 3) | (VAR_18 << 12);
  VAR_17 |= ((!VAR_18) << 4) | ((!VAR_18) << 9);
  FUNC_9(VAR_11.nb_dev,
     VAR_7, VAR_17);

  VAR_14 = VAR_5;
  FUNC_9(VAR_11.nb_dev,
     VAR_6, VAR_14);
  FUNC_8(VAR_11.nb_dev,
     VAR_7, &VAR_17);
  VAR_17 &= ~(1 << 8);
  VAR_17 |= VAR_18 << 8;

  FUNC_9(VAR_11.nb_dev,
     VAR_7, VAR_17);
 } else if (VAR_11.nb_type == 2) {
  VAR_14 = VAR_8;
  FUNC_9(VAR_11.nb_dev,
     VAR_6, VAR_14);
  FUNC_8(VAR_11.nb_dev,
     VAR_7, &VAR_17);
  if (VAR_13)
   VAR_17 &= ~(0x3f << 7);
  else
   VAR_17 |= 0x3f << 7;

  FUNC_9(VAR_11.nb_dev,
     VAR_7, VAR_17);

  VAR_14 = VAR_9;
  FUNC_9(VAR_11.nb_dev,
     VAR_6, VAR_14);
  FUNC_8(VAR_11.nb_dev,
     VAR_7, &VAR_17);
  if (VAR_13)
   VAR_17 &= ~(0x3f << 7);
  else
   VAR_17 |= 0x3f << 7;

  FUNC_9(VAR_11.nb_dev,
     VAR_7, VAR_17);
 }

 FUNC_11(&VAR_12, VAR_19);
 return;
}
