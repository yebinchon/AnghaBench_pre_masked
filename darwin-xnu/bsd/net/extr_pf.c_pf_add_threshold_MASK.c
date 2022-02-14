
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct pf_threshold {int last; int seconds; int count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct pf_threshold *VAR_1)
{
 u_int32_t VAR_2 = FUNC_0(), VAR_3 = VAR_2 - VAR_1->last;

 if (VAR_3 >= VAR_1->seconds)
  VAR_1->count = 0;
 else
  VAR_1->count -= VAR_1->count * VAR_3 /
      VAR_1->seconds;
 VAR_1->count += VAR_0;
 VAR_1->last = VAR_2;
}
