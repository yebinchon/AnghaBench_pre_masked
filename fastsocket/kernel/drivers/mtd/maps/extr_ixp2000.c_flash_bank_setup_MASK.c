
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {scalar_t__ map_priv_2; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct map_info *VAR_0, unsigned long VAR_1)
{
 unsigned long (*VAR_2)(unsigned long) =
  (unsigned long(*)(unsigned long))VAR_0->map_priv_2;

 return (VAR_2 ? VAR_2(VAR_1) : VAR_1);
}
