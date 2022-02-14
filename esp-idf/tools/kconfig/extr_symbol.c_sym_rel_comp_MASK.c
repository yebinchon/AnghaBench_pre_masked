
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sym_match {scalar_t__ eo; scalar_t__ so; TYPE_1__* sym; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct sym_match *VAR_2 = VAR_0;
 const struct sym_match *VAR_3 = VAR_1;
 int VAR_4, VAR_5;
 VAR_4 = (VAR_2->eo - VAR_2->so) == FUNC_1(VAR_2->sym->name);
 VAR_5 = (VAR_3->eo - VAR_3->so) == FUNC_1(VAR_3->sym->name);
 if (VAR_4 && !VAR_5)
  return -1;
 if (!VAR_4 && VAR_5)
  return 1;


 return FUNC_0(VAR_2->sym->name, VAR_3->sym->name);
}
