
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int isa_level; int options; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 () ;
 int VAR_9 ;

__attribute__((used)) static inline unsigned int FUNC_2(struct cpuinfo_mips *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1();

 if (((VAR_11 & VAR_3) >> 7) == 1)
  VAR_10->options |= VAR_8;
 VAR_12 = (VAR_11 & VAR_1) >> 13;
 switch (VAR_12) {
 case 0:
  switch ((VAR_11 & VAR_0) >> 10) {
  case 0:
   VAR_10->isa_level = VAR_4;
   break;
  case 1:
   VAR_10->isa_level = VAR_5;
   break;
  default:
   goto unknown;
  }
  break;
 case 2:
  switch ((VAR_11 & VAR_0) >> 10) {
  case 0:
   VAR_10->isa_level = VAR_6;
   break;
  case 1:
   VAR_10->isa_level = VAR_7;
   break;
  default:
   goto unknown;
  }
  break;
 default:
  goto unknown;
 }

 return VAR_11 & VAR_2;

unknown:
 FUNC_0(VAR_9, VAR_11);
}
