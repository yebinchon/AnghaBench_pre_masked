
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct extif_timings {int dummy; } ;
struct TYPE_4__ {TYPE_1__* extif; } ;
struct TYPE_3__ {int (* set_timings ) (struct extif_timings const*) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct extif_timings const*) ;

__attribute__((used)) static inline void FUNC_1(const struct extif_timings *VAR_1)
{
 VAR_0.extif->set_timings(VAR_1);
}
