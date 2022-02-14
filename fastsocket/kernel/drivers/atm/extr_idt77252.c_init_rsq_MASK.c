
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsq_entry {scalar_t__ word_4; } ;
struct TYPE_2__ {unsigned long paddr; struct rsq_entry* base; struct rsq_entry* last; struct rsq_entry* next; } ;
struct idt77252_dev {int name; TYPE_1__ rsq; int pcidev; } ;


 int FUNC_0 (char*,int ,unsigned long,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rsq_entry*,int ,int ) ;
 struct rsq_entry* FUNC_2 (int ,int ,unsigned long*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int
FUNC_6(struct idt77252_dev *VAR_5)
{
 struct rsq_entry *VAR_6;

 VAR_5->rsq.base = FUNC_2(VAR_5->pcidev, VAR_0,
           &VAR_5->rsq.paddr);
 if (VAR_5->rsq.base == ((void*)0)) {
  FUNC_3("%s: can't allocate RSQ.\n", VAR_5->name);
  return -1;
 }
 FUNC_1(VAR_5->rsq.base, 0, VAR_0);

 VAR_5->rsq.last = VAR_5->rsq.base + VAR_1 - 1;
 VAR_5->rsq.next = VAR_5->rsq.last;
 for (VAR_6 = VAR_5->rsq.base; VAR_6 <= VAR_5->rsq.last; VAR_6++)
  VAR_6->word_4 = 0;

 FUNC_5((unsigned long) VAR_5->rsq.last - (unsigned long) VAR_5->rsq.base,
        VAR_3);
 FUNC_5(VAR_5->rsq.paddr, VAR_2);

 FUNC_0("%s: RSQ base at 0x%lx (0x%x).\n", VAR_5->name,
  (unsigned long) VAR_5->rsq.base,
  FUNC_4(VAR_2));
 FUNC_0("%s: RSQ head = 0x%x, base = 0x%x, tail = 0x%x.\n",
  VAR_5->name,
  FUNC_4(VAR_3),
  FUNC_4(VAR_2),
  FUNC_4(VAR_4));

 return 0;
}
