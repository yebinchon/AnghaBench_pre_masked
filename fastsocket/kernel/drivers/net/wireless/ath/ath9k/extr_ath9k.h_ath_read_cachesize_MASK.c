
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_common {TYPE_1__* bus_ops; } ;
struct TYPE_2__ {int (* read_cachesize ) (struct ath_common*,int*) ;} ;


 int FUNC_0 (struct ath_common*,int*) ;

__attribute__((used)) static inline void FUNC_1(struct ath_common *VAR_0, int *VAR_1)
{
 VAR_0->bus_ops->read_cachesize(VAR_0, VAR_1);
}
