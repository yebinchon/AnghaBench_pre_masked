
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ulk_pid; scalar_t__ ulk_addr; } ;
typedef TYPE_1__ ulk_t ;



__attribute__((used)) inline static bool
FUNC_0(ulk_t *VAR_0, ulk_t *VAR_1)
{
 return ((VAR_0->ulk_pid == VAR_1->ulk_pid) &&
  (VAR_0->ulk_addr == VAR_1->ulk_addr));
}
