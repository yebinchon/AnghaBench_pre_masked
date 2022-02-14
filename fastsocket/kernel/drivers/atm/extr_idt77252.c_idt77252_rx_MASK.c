
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsq_entry {scalar_t__ word_4; } ;
struct TYPE_2__ {struct rsq_entry* base; struct rsq_entry* next; struct rsq_entry* last; } ;
struct idt77252_dev {TYPE_1__ rsq; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct idt77252_dev*,struct rsq_entry*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static void
FUNC_4(struct idt77252_dev *VAR_2)
{
 struct rsq_entry *VAR_3;

 if (VAR_2->rsq.next == VAR_2->rsq.last)
  VAR_3 = VAR_2->rsq.base;
 else
  VAR_3 = VAR_2->rsq.next + 1;

 if (!(FUNC_2(VAR_3->word_4) & VAR_1)) {
  FUNC_0("%s: no entry in RSQ.\n", VAR_2->name);
  return;
 }

 do {
  FUNC_1(VAR_2, VAR_3);
  VAR_3->word_4 = 0;
  VAR_2->rsq.next = VAR_3;
  if (VAR_2->rsq.next == VAR_2->rsq.last)
   VAR_3 = VAR_2->rsq.base;
  else
   VAR_3 = VAR_2->rsq.next + 1;
 } while (FUNC_2(VAR_3->word_4) & VAR_1);

 FUNC_3((unsigned long) VAR_2->rsq.next - (unsigned long) VAR_2->rsq.base,
        VAR_0);
}
