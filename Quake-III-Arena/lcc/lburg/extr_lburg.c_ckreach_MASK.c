
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int reached; TYPE_1__* rules; } ;
struct TYPE_4__ {int pattern; struct TYPE_4__* decode; } ;
typedef TYPE_1__* Rule ;
typedef TYPE_2__* Nonterm ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(Nonterm VAR_0) {
 Rule VAR_1;

        VAR_0->reached = 1;
 for (VAR_1 = VAR_0->rules; VAR_1; VAR_1 = VAR_1->decode)
  FUNC_0(VAR_1->pattern);
}
