
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_4__ {size_t curbytes; scalar_t__ curobjs; } ;
typedef TYPE_1__ quarantine_t ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(tsd_t *VAR_0, quarantine_t *VAR_1, size_t VAR_2)
{

 while (VAR_1->curbytes > VAR_2 && VAR_1->curobjs > 0)
  FUNC_0(VAR_0, VAR_1);
}
