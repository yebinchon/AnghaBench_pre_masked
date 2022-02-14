
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_invoke_id; int* invoke_used; } ;
struct TYPE_4__ {TYPE_1__ dss1; } ;
struct PStack {TYPE_2__ prot; } ;



__attribute__((used)) static unsigned char FUNC_0(struct PStack *VAR_0)
{
 unsigned char VAR_1;
 int VAR_2;

 VAR_2 = 32;

 VAR_1 = VAR_0->prot.dss1.last_invoke_id + 1;
 while ((VAR_2) && (VAR_0->prot.dss1.invoke_used[VAR_1 >> 3] == 0xFF)) {
  VAR_0->prot.dss1.last_invoke_id = (VAR_1 & 0xF8) + 8;
  VAR_2--;
 }
 if (VAR_2) {
  while (VAR_0->prot.dss1.invoke_used[VAR_1 >> 3] & (1 << (VAR_1 & 7)))
  VAR_1++;
 } else
  VAR_1 = 0;
 VAR_0->prot.dss1.last_invoke_id = VAR_1;
 VAR_0->prot.dss1.invoke_used[VAR_1 >> 3] |= (1 << (VAR_1 & 7));
 return(VAR_1);
}
