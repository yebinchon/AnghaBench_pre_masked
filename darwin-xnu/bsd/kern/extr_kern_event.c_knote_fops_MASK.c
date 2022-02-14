
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {size_t kn_filtid; } ;
struct filterops {int dummy; } ;


 struct filterops const** VAR_0 ;

const struct filterops *
FUNC_0(struct knote *VAR_1)
{
 return VAR_0[VAR_1->kn_filtid];
}
