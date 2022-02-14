
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Window ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int *,int *,int*,int*,int*,int*,unsigned int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_1(int VAR_8)
{
 Window VAR_9;
 Window VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 unsigned int VAR_15;

 VAR_3 = 0x0f;

 FUNC_0(VAR_2, VAR_4, &VAR_9, &VAR_10,
      &VAR_11, &VAR_12,
      &VAR_13, &VAR_14,
      &VAR_15);

 if (VAR_8 < 5) {
  int VAR_16;
  int VAR_17;
  int VAR_18;

  if (VAR_7 == VAR_1) {
   VAR_16 = VAR_6 / 2;
   VAR_17 = VAR_5 / 2;
   VAR_18 = 32;
  }
  else if (VAR_7 == VAR_0) {
   VAR_16 = VAR_6 / 2;
   VAR_17 = VAR_5 / 2;
   VAR_18 = 64;
  }
  else {
   VAR_16 = VAR_6 / 2;
   VAR_17 = VAR_5 / 2;
   VAR_18 = 96;
  }

  if (VAR_13 < 0 || VAR_13 > VAR_16 * 2 ||
      VAR_14 < 0 || VAR_14 > VAR_17 * 2 )
   VAR_3 = 0x0f;
  else
  {
  if (VAR_13 < (VAR_16 - VAR_18))
   VAR_3 &= 0xfb;
  if (VAR_13 > (VAR_16 + VAR_18))
   VAR_3 &= 0xf7;
  if (VAR_14 < (VAR_17 - VAR_18))
   VAR_3 &= 0xfe;
  if (VAR_14 > (VAR_17 + VAR_18))
   VAR_3 &= 0xfd;
  }
 }
 else {
  if (VAR_15)
   VAR_3 &= 0xfb;
 }
}
