
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pal_freq_ratio {int num; int den; } ;


 int FUNC_0 (unsigned long*) ;
 scalar_t__ FUNC_1 (struct pal_freq_ratio*,struct pal_freq_ratio*,struct pal_freq_ratio*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0)
{
 char *VAR_1 = VAR_0;
 struct pal_freq_ratio VAR_2, VAR_3, VAR_4;
 unsigned long VAR_5;

 if (FUNC_0(&VAR_5) == -1)
  VAR_1 += FUNC_2(VAR_1, "Output clock            : not implemented\n");
 else
  VAR_1 += FUNC_2(VAR_1, "Output clock            : %ld ticks/s\n", VAR_5);

 if (FUNC_1(&VAR_2, &VAR_4, &VAR_3) != 0) return 0;

 VAR_1 += FUNC_2(VAR_1,
       "Processor/Clock ratio   : %d/%d\n"
       "Bus/Clock ratio         : %d/%d\n"
       "ITC/Clock ratio         : %d/%d\n",
       VAR_2.num, VAR_2.den, VAR_4.num, VAR_4.den, VAR_3.num, VAR_3.den);

 return VAR_1 - VAR_0;
}
