
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned char VAR_16;
 int VAR_17 = 0;
 unsigned long VAR_18;

 FUNC_1(&VAR_15, VAR_18);
 VAR_16 = FUNC_0(VAR_12);
 FUNC_2(&VAR_15, VAR_18);

 if (VAR_16 & VAR_2)
  VAR_17 |= VAR_6;
 if (VAR_16 & VAR_1)
  VAR_17 |= VAR_7;
 if (VAR_14 == 501) {
  if (!(VAR_16 & VAR_5))
   VAR_17 |= VAR_9;
  if (!(VAR_16 & VAR_3))
   VAR_17 |= VAR_10;
  if (!(VAR_16 & VAR_4))
   VAR_17 |= VAR_11;
  if (VAR_13) {
   if (!(VAR_16 & VAR_0))
    VAR_17 |= VAR_8;
  }
 }
 return VAR_17;
}
