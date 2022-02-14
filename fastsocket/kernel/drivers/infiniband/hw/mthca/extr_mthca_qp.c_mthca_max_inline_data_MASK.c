
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ uobject; } ;
struct mthca_pd {TYPE_1__ ibpd; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct mthca_pd *VAR_1, int VAR_2)
{

 return VAR_1->ibpd.uobject ? VAR_2 - VAR_0 : 0;
}
