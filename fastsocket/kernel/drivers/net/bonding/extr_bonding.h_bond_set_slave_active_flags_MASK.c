
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {TYPE_1__* dev; int state; } ;
struct TYPE_2__ {int priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct slave *VAR_3)
{
 VAR_3->state = VAR_0;
 VAR_3->dev->priv_flags &= ~(VAR_1 | VAR_2);
}
