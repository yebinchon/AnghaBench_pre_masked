
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct trace_point {int const debugid; int arg1; } ;


 int const VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int *) ;
 int FUNC_1 (char*,char const*,int const) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct trace_point *VAR_2, const char *VAR_3, unsigned int *VAR_4,
  const uint32_t *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7 = *VAR_4;
 bool VAR_8 = 0;
 size_t VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  if (VAR_5[VAR_9] == (VAR_2->debugid & VAR_0)) {
   FUNC_1("found %s event 0x%x", VAR_3, VAR_2->debugid);
   VAR_8 = 1;
  }
 }

 if (!VAR_8) {
  return;
 }

 *VAR_4 += 1;
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_1; FUNC_0(((uint64_t *)&VAR_2->arg1)[VAR_9], (uint64_t)VAR_9 + 1,
    ((void*)0));
 }
 for (; VAR_9 < 4; VAR_9++) {
  VAR_1; FUNC_0(((uint64_t *)&VAR_2->arg1)[VAR_9], (uint64_t)0, ((void*)0));
 }
}
