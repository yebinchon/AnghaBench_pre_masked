
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {unsigned int tlbsize; int options; int ases; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned int FUNC_0 () ;

__attribute__((used)) static inline unsigned int FUNC_1(struct cpuinfo_mips *VAR_14)
{
 unsigned int VAR_15;

 VAR_15 = FUNC_0();

 if (VAR_15 & VAR_5)
  VAR_14->ases |= VAR_0;
 if (VAR_15 & VAR_7)
  VAR_14->options |= VAR_12;
 if (VAR_15 & VAR_2)
  VAR_14->ases |= VAR_1;
 if (VAR_15 & VAR_3)
  VAR_14->options |= VAR_10;
 if (VAR_15 & VAR_4) {
  VAR_14->options |= VAR_11;
  VAR_14->options |= VAR_9;
 }
 if (VAR_13)
  VAR_14->tlbsize = ((VAR_15 & VAR_6) >> 25) + 1;

 return VAR_15 & VAR_8;
}
