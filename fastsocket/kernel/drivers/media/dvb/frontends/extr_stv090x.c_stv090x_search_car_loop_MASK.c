
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
 int FUNC_0 (struct stv090x_state*,int ) ;
 int FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (struct stv090x_state*) ;
 int FUNC_5 (struct stv090x_state*,int) ;

__attribute__((used)) static int FUNC_6(struct stv090x_state *VAR_6, s32 VAR_7, s32 VAR_8, int VAR_9, s32 VAR_10)
{
 int VAR_11, VAR_12 = 0;
 s32 VAR_13 = 0, VAR_14, VAR_15;
 u32 VAR_16;

 VAR_15 = VAR_6->search_range / 1000;
 VAR_15 += (VAR_15 / 10);
 VAR_15 = (65536 * VAR_15 / 2);
 VAR_15 /= (VAR_6->internal->mclk / 1000);
 if (VAR_15 > 0x4000)
  VAR_15 = 0x4000;

 if (VAR_9)
  VAR_14 = 0;
 else
  VAR_14 = -VAR_15 + VAR_7;

 do {
  if (FUNC_2(VAR_6, VAR_3, 0x1c) < 0)
   goto err;
  if (FUNC_2(VAR_6, VAR_2, ((VAR_14 / 256) & 0xff)) < 0)
   goto err;
  if (FUNC_2(VAR_6, VAR_1, VAR_14 & 0xff) < 0)
   goto err;
  if (FUNC_2(VAR_6, VAR_3, 0x18) < 0)
   goto err;

  VAR_16 = FUNC_0(VAR_6, VAR_5);
  FUNC_1(VAR_16, VAR_0, 0x1);
  if (FUNC_2(VAR_6, VAR_5, VAR_16) < 0)
   goto err;

  if (VAR_9) {
   if (VAR_14 >= 0)
    VAR_14 = -VAR_14 - 2 * VAR_7;
   else
    VAR_14 = -VAR_14;
  } else {
   VAR_14 += 2 * VAR_7;
  }

  VAR_13++;

  VAR_12 = FUNC_5(VAR_6, VAR_8);
  VAR_11 = FUNC_4(VAR_6);

 } while ((!VAR_12) &&
   (!VAR_11) &&
    ((VAR_14 - VAR_7) < VAR_15) &&
    ((VAR_14 + VAR_7) > -VAR_15) &&
    (VAR_13 < VAR_10));

 VAR_16 = FUNC_0(VAR_6, VAR_5);
 FUNC_1(VAR_16, VAR_0, 0);
 if (FUNC_2(VAR_6, VAR_5, VAR_16) < 0)
   goto err;

 return VAR_12;
err:
 FUNC_3(VAR_4, 1, "I/O error");
 return -1;
}
