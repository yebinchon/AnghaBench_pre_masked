
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* Busy ) (TYPE_1__*) ;} ;
struct riva_par {TYPE_1__ riva; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(struct riva_par *VAR_0)
{
 while (VAR_0->riva.Busy(&VAR_0->riva));
}
