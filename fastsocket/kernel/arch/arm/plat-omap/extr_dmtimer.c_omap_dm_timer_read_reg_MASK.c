
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_dm_timer {scalar_t__ io_base; scalar_t__ posted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct omap_dm_timer *VAR_2, u32 VAR_3)
{
 if (VAR_2->posted)
  while (FUNC_1(VAR_2->io_base + (VAR_0 & 0xff))
    & (VAR_3 >> VAR_1))
   FUNC_0();
 return FUNC_1(VAR_2->io_base + (VAR_3 & 0xff));
}
