
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int options; int ases; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_0 () ;

__attribute__((used)) static inline unsigned int FUNC_1(struct cpuinfo_mips *VAR_13)
{
 unsigned int VAR_14;

 VAR_14 = FUNC_0();

 if (VAR_14 & VAR_5)
  VAR_13->ases |= VAR_2;
 if (VAR_14 & VAR_3)
  VAR_13->ases |= VAR_0;
 if (VAR_14 & VAR_8)
  VAR_13->options |= VAR_12;
 if (VAR_14 & VAR_7)
  VAR_13->options |= VAR_11;
 if (VAR_14 & VAR_4)
         VAR_13->ases |= VAR_1;
 if (VAR_14 & VAR_6)
  VAR_13->options |= VAR_10;

 return VAR_14 & VAR_9;
}
