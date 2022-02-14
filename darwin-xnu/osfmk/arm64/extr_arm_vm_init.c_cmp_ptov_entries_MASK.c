
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
typedef TYPE_1__ ptov_table_entry ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const ptov_table_entry *VAR_2 = VAR_0;
 const ptov_table_entry *VAR_3 = VAR_1;

 if (VAR_2->len < VAR_3->len)
  return 1;
 else if (VAR_2->len > VAR_3->len)
  return -1;
 else
  return 0;
}
