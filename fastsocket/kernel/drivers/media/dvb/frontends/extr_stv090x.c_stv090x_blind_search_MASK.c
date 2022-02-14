
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct stv090x_state {int DemodTimeout; TYPE_1__* internal; } ;
typedef int s32 ;
struct TYPE_2__ {int dev_ver; } ;


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
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct stv090x_state*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int,char*) ;
 scalar_t__ FUNC_5 (struct stv090x_state*) ;
 int FUNC_6 (struct stv090x_state*,int ) ;
 int FUNC_7 (struct stv090x_state*) ;
 scalar_t__ FUNC_8 (struct stv090x_state*) ;
 scalar_t__ FUNC_9 (struct stv090x_state*) ;

__attribute__((used)) static int FUNC_10(struct stv090x_state *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;
 s32 VAR_17, VAR_18, VAR_19;
 u8 VAR_20, VAR_21, VAR_22;
 int VAR_23 = 0;
 int VAR_24;

 VAR_21 = 110;
 VAR_22 = 10;

 VAR_14 = FUNC_5(VAR_13);

 if (VAR_14 > FUNC_2(VAR_13->internal->dev_ver)) {
  VAR_24 = 0;
 } else {

  if (VAR_13->internal->dev_ver <= 0x20) {
   if (FUNC_3(VAR_13, VAR_2, 0xc4) < 0)
    goto err;
  } else {

   if (FUNC_3(VAR_13, VAR_2, 0x06) < 0)
    goto err;
  }

  if (FUNC_3(VAR_13, VAR_10, 0x44) < 0)
   goto err;

  if (VAR_13->internal->dev_ver >= 0x20) {
   if (FUNC_3(VAR_13, VAR_6, 0x41) < 0)
    goto err;
   if (FUNC_3(VAR_13, VAR_8, 0x41) < 0)
    goto err;
   if (FUNC_3(VAR_13, VAR_12, 0x82) < 0)
    goto err;
   if (FUNC_3(VAR_13, VAR_11, 0x00) < 0)
    goto err;
  }

  VAR_20 = VAR_21;
  do {
   if (FUNC_3(VAR_13, VAR_9, VAR_20) < 0)
    goto err;
   if (FUNC_8(VAR_13) != 0) {
    VAR_16 = FUNC_9(VAR_13);
    if (VAR_16 != 0) {
     FUNC_7(VAR_13);
     VAR_24 = FUNC_6(VAR_13,
       VAR_13->DemodTimeout);
    } else {
     VAR_24 = 0;
    }
   } else {
    VAR_17 = 0;
    VAR_18 = 0;
    for (VAR_19 = 0; VAR_19 < 10; VAR_19++) {
     VAR_14 += (FUNC_1(VAR_13, VAR_1) << 8) |
      FUNC_1(VAR_13, VAR_0);
     if (VAR_14 >= 0xff00)
      VAR_18++;
     VAR_15 = FUNC_1(VAR_13, VAR_5);
     if ((FUNC_0(VAR_15, VAR_3) == 0x01) &&
         (FUNC_0(VAR_15, VAR_4) == 0x01))

      VAR_17++;
    }
    if ((VAR_17 > 7) || (VAR_18 > 7))
     VAR_23 = 1;

    VAR_24 = 0;
   }
   VAR_20 -= 20;
  } while ((VAR_20 >= VAR_22) && (!VAR_24) && (!VAR_23));
 }

 return VAR_24;

err:
 FUNC_4(VAR_7, 1, "I/O error");
 return -1;
}
