
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct cpuinfo_mips {TYPE_1__ scache; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 () ;

__attribute__((used)) static inline unsigned int FUNC_1(struct cpuinfo_mips *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0();

 if (VAR_4 & VAR_1)
  VAR_3->scache.flags &= ~VAR_0;

 return VAR_4 & VAR_2;
}
