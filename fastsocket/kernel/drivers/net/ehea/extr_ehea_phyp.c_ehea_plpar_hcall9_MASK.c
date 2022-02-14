
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ FUNC_0 (int ,unsigned long) ;
 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_1 (long) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 long VAR_9 ;
 int FUNC_2 (char*,unsigned long,long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (long) ;
 int FUNC_4 (int) ;
 long FUNC_5 (unsigned long,unsigned long*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_6(unsigned long VAR_10,
         unsigned long *VAR_11,
         unsigned long VAR_12,
         unsigned long VAR_13,
         unsigned long VAR_14,
         unsigned long VAR_15,
         unsigned long VAR_16,
         unsigned long VAR_17,
         unsigned long VAR_18,
         unsigned long VAR_19,
         unsigned long VAR_20)
{
 long VAR_21;
 int VAR_22, VAR_23;
 u8 VAR_24;

 for (VAR_22 = 0; VAR_22 < 5; VAR_22++) {
  VAR_21 = FUNC_5(VAR_10, VAR_11,
       VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
       VAR_17, VAR_18, VAR_19, VAR_20);

  if (FUNC_1(VAR_21)) {
   VAR_23 = FUNC_3(VAR_21);
   FUNC_4(VAR_23);
   continue;
  }

  VAR_24 = FUNC_0(VAR_2, VAR_13);

  if ((VAR_21 < VAR_9) && !(((VAR_21 == VAR_0)
      && (VAR_10 == VAR_3))
      && (((VAR_24 == VAR_4) && ((VAR_14 == VAR_5)
      || (VAR_14 == VAR_6))) || ((VAR_24 == VAR_7)
      && (VAR_14 == VAR_8)))))
   FUNC_2("opcode=%lx ret=%lx"
       " arg1=%lx arg2=%lx arg3=%lx arg4=%lx"
       " arg5=%lx arg6=%lx arg7=%lx arg8=%lx"
       " arg9=%lx"
       " out1=%lx out2=%lx out3=%lx out4=%lx"
       " out5=%lx out6=%lx out7=%lx out8=%lx"
       " out9=%lx",
       VAR_10, VAR_21,
       VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
       VAR_17, VAR_18, VAR_19, VAR_20,
       VAR_11[0], VAR_11[1], VAR_11[2], VAR_11[3],
       VAR_11[4], VAR_11[5], VAR_11[6], VAR_11[7],
       VAR_11[8]);
  return VAR_21;
 }

 return VAR_1;
}
