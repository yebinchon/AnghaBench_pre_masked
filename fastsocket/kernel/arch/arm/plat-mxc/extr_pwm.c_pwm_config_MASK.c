
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {scalar_t__ mmio_base; int clk; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (unsigned long long,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;

int FUNC_11(struct pwm_device *VAR_9, int VAR_10, int VAR_11)
{
 if (VAR_9 == ((void*)0) || VAR_11 == 0 || VAR_10 > VAR_11)
  return -VAR_0;

 if (FUNC_6() || FUNC_7() || FUNC_5()) {
  unsigned long long VAR_12;
  unsigned long VAR_13, VAR_14, VAR_15;
  u32 VAR_16;

  VAR_12 = FUNC_2(VAR_9->clk);
  VAR_12 = VAR_12 * VAR_11;
  FUNC_8(VAR_12, 1000000000);
  VAR_13 = VAR_12;

  VAR_15 = VAR_13 / 0x10000 + 1;

  VAR_13 /= VAR_15;
  VAR_12 = (unsigned long long)VAR_13 * VAR_10;
  FUNC_8(VAR_12, VAR_11);
  VAR_14 = VAR_12;

  FUNC_10(VAR_14, VAR_9->mmio_base + VAR_8);
  FUNC_10(VAR_13, VAR_9->mmio_base + VAR_7);

  VAR_16 = FUNC_1(VAR_15) | VAR_6;

  if (FUNC_5())
   VAR_16 |= VAR_4;
  else
   VAR_16 |= VAR_5;

  FUNC_10(VAR_16, VAR_9->mmio_base + VAR_3);
 } else if (FUNC_3() || FUNC_4()) {
  u32 VAR_17 = FUNC_9(VAR_9->mmio_base + VAR_1);
  u32 VAR_18 = VAR_17 * VAR_10 / VAR_11;
  FUNC_10(VAR_17 - VAR_18, VAR_9->mmio_base + VAR_2);
 } else {
  FUNC_0();
 }

 return 0;
}
