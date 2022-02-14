
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath5k_hw {int dummy; } ;
typedef enum ath_bus_type { ____Placeholder_ath_bus_type } ath_bus_type ;
struct TYPE_4__ {TYPE_1__* bus_ops; } ;
struct TYPE_3__ {int ath_bus_type; } ;


 TYPE_2__* FUNC_0 (struct ath5k_hw*) ;

__attribute__((used)) static inline enum ath_bus_type FUNC_1(struct ath5k_hw *VAR_0)
{
 return FUNC_0(VAR_0)->bus_ops->ath_bus_type;
}
