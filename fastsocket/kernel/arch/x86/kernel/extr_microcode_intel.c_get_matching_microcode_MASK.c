
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microcode_header_intel {int pf; int sig; } ;
struct extended_sigtable {int count; } ;
struct extended_signature {int pf; int sig; } ;
struct cpu_signature {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 long FUNC_0 (struct microcode_header_intel*) ;
 unsigned long FUNC_1 (struct microcode_header_intel*) ;
 scalar_t__ FUNC_2 (struct cpu_signature*,int ,int ) ;
 int FUNC_3 (struct microcode_header_intel*,int) ;

__attribute__((used)) static int
FUNC_4(struct cpu_signature *VAR_2, void *VAR_3, int VAR_4)
{
 struct microcode_header_intel *VAR_5 = VAR_3;
 struct extended_sigtable *VAR_6;
 unsigned long VAR_7 = FUNC_1(VAR_5);
 int VAR_8, VAR_9;
 struct extended_signature *VAR_10;

 if (!FUNC_3(VAR_5, VAR_4))
  return 0;

 if (FUNC_2(VAR_2, VAR_5->sig, VAR_5->pf))
  return 1;


 if (VAR_7 <= FUNC_0(VAR_5) + VAR_1)
  return 0;

 VAR_6 = VAR_3 + FUNC_0(VAR_5) + VAR_1;
 VAR_8 = VAR_6->count;
 VAR_10 = (void *)VAR_6 + VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (FUNC_2(VAR_2, VAR_10->sig, VAR_10->pf))
   return 1;
  VAR_10++;
 }
 return 0;
}
