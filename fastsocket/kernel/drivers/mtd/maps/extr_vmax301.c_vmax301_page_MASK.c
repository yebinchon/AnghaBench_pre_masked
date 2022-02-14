
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {unsigned long map_priv_1; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct map_info*,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct map_info *VAR_1,
      unsigned long VAR_2)
{
 unsigned long VAR_3 = (VAR_2 >> VAR_0);
 if (VAR_1->map_priv_1 != VAR_3)
  FUNC_0(VAR_1, VAR_3);
}
