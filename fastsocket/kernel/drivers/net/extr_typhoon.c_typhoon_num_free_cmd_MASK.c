
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lastWrite; } ;
struct typhoon {TYPE_2__* indexes; TYPE_1__ cmdRing; } ;
struct TYPE_4__ {int cmdCleared; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct typhoon *VAR_1)
{
 int VAR_2 = VAR_1->cmdRing.lastWrite;
 int VAR_3 = FUNC_0(VAR_1->indexes->cmdCleared);

 return FUNC_1(VAR_2, VAR_3, VAR_0);
}
