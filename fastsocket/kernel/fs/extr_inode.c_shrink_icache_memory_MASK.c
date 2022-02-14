
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shrinker {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int nr_unused; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct shrinker *VAR_3, int VAR_4, gfp_t VAR_5)
{
 if (VAR_4) {





  if (!(VAR_5 & VAR_0))
   return -1;
  FUNC_0(VAR_4);
 }
 return (VAR_1.nr_unused / 100) * VAR_2;
}
