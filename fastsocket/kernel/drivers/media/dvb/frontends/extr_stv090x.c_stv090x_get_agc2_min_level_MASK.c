
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {int search_range; TYPE_1__* internal; } ;
typedef int s32 ;
struct TYPE_2__ {int mclk; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct stv090x_state*,int ) ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct stv090x_state*,int) ;

__attribute__((used)) static int FUNC_6(struct stv090x_state *VAR_15)
{
 u32 VAR_16 = 0xffff, VAR_17 = 0, VAR_18, VAR_19, VAR_20;
 s32 VAR_21, VAR_22, VAR_23, VAR_24;

 if (FUNC_2(VAR_15, VAR_2, 0x38) < 0)
  goto err;
 VAR_20 = FUNC_0(VAR_15, VAR_6);
 FUNC_1(VAR_20, VAR_10, 0);
 FUNC_1(VAR_20, VAR_5, 0);
 if (FUNC_2(VAR_15, VAR_6, VAR_20) < 0)
  goto err;

 if (FUNC_2(VAR_15, VAR_14, 0x83) < 0)
  goto err;
 if (FUNC_2(VAR_15, VAR_13, 0xc0) < 0)
  goto err;
 if (FUNC_2(VAR_15, VAR_12, 0x82) < 0)
  goto err;
 if (FUNC_2(VAR_15, VAR_11, 0xa0) < 0)
  goto err;
 if (FUNC_2(VAR_15, VAR_8, 0x00) < 0)
  goto err;
 if (FUNC_5(VAR_15, 1000000) < 0)
  goto err;

 VAR_23 = VAR_15->search_range / 1000000;
 if (VAR_23 <= 0)
  VAR_23 = 1;

 VAR_24 = 1;
 VAR_19 = (1000000 * 256) / (VAR_15->internal->mclk / 256);
 VAR_18 = 0;

 for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
  if (VAR_24 > 0)
   VAR_18 = VAR_18 + (VAR_19 * VAR_21);
  else
   VAR_18 = VAR_18 - (VAR_19 * VAR_21);

  VAR_24 *= -1;

  if (FUNC_2(VAR_15, VAR_7, 0x5c) < 0)
   goto err;
  if (FUNC_2(VAR_15, VAR_4, (VAR_18 >> 8) & 0xff) < 0)
   goto err;
  if (FUNC_2(VAR_15, VAR_3, VAR_18 & 0xff) < 0)
   goto err;
  if (FUNC_2(VAR_15, VAR_7, 0x58) < 0)
   goto err;
  FUNC_4(10);

  VAR_17 = 0;
  for (VAR_22 = 0; VAR_22 < 10; VAR_22++) {
   VAR_17 += (FUNC_0(VAR_15, VAR_1) << 8) |
    FUNC_0(VAR_15, VAR_0);
  }
  VAR_17 /= 10;
  if (VAR_17 < VAR_16)
   VAR_16 = VAR_17;
 }

 return VAR_16;
err:
 FUNC_3(VAR_9, 1, "I/O error");
 return -1;
}
