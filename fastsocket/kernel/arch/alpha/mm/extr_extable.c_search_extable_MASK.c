
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {int dummy; } ;


 unsigned long FUNC_0 (struct exception_table_entry const*) ;

const struct exception_table_entry *
FUNC_1(const struct exception_table_entry *VAR_0,
        const struct exception_table_entry *VAR_1,
        unsigned long VAR_2)
{
        while (VAR_0 <= VAR_1) {
  const struct exception_table_entry *VAR_3;
  unsigned long VAR_4;

  VAR_3 = (VAR_1 - VAR_0) / 2 + VAR_0;
  VAR_4 = FUNC_0(VAR_3);
                if (VAR_4 == VAR_2)
                        return VAR_3;
                else if (VAR_4 < VAR_2)
                        VAR_0 = VAR_3+1;
                else
                        VAR_1 = VAR_3-1;
        }

        return ((void*)0);
}
