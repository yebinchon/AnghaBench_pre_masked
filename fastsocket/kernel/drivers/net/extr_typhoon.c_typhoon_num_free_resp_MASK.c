
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typhoon {TYPE_1__* indexes; } ;
struct TYPE_2__ {int respCleared; int respReady; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct typhoon *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->indexes->respReady);
 int VAR_3 = FUNC_0(VAR_1->indexes->respCleared);

 return FUNC_1(VAR_2, VAR_3, VAR_0);
}
