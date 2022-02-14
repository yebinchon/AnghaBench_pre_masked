
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {unsigned long insn; unsigned long fixup; } ;



__attribute__((used)) static inline unsigned long FUNC_0(const struct exception_table_entry *VAR_0,
          const struct exception_table_entry *VAR_1,
          unsigned long VAR_2)
{
        while (VAR_0 <= VAR_1) {
  const struct exception_table_entry __attribute__((aligned(8))) *VAR_3;
  long VAR_4;

  VAR_3 = (VAR_1 - VAR_0) / 2 + VAR_0;
  VAR_4 = VAR_3->insn - VAR_2;
                if (VAR_4 == 0)
                        return VAR_3->fixup;
                else if (VAR_4 < 0)
                        VAR_0 = VAR_3 + 1;
                else
                        VAR_1 = VAR_3 - 1;
        }
        return 0;
}
