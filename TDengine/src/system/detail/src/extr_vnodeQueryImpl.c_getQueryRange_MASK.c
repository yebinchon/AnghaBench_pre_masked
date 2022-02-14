
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lastKey; scalar_t__ ekey; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SQuery ;



__attribute__((used)) static void FUNC_0(SQuery *VAR_0, TSKEY *VAR_1, TSKEY *VAR_2) {
  *VAR_1 = VAR_0->lastKey < VAR_0->ekey ? VAR_0->lastKey : VAR_0->ekey;
  *VAR_2 = VAR_0->lastKey >= VAR_0->ekey ? VAR_0->lastKey : VAR_0->ekey;
}
