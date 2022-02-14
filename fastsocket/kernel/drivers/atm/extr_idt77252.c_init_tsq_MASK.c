
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsq_entry {int word_2; } ;
struct TYPE_2__ {unsigned long paddr; struct tsq_entry* base; struct tsq_entry* next; struct tsq_entry* last; } ;
struct idt77252_dev {TYPE_1__ tsq; int name; int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tsq_entry*,int ,int ) ;
 struct tsq_entry* FUNC_2 (int ,int ,unsigned long*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static int
FUNC_5(struct idt77252_dev *VAR_6)
{
 struct tsq_entry *VAR_7;

 VAR_6->tsq.base = FUNC_2(VAR_6->pcidev, VAR_0,
           &VAR_6->tsq.paddr);
 if (VAR_6->tsq.base == ((void*)0)) {
  FUNC_3("%s: can't allocate TSQ.\n", VAR_6->name);
  return -1;
 }
 FUNC_1(VAR_6->tsq.base, 0, VAR_4);

 VAR_6->tsq.last = VAR_6->tsq.base + VAR_5 - 1;
 VAR_6->tsq.next = VAR_6->tsq.last;
 for (VAR_7 = VAR_6->tsq.base; VAR_7 <= VAR_6->tsq.last; VAR_7++)
  VAR_7->word_2 = FUNC_0(VAR_3);

 FUNC_4(VAR_6->tsq.paddr, VAR_1);
 FUNC_4((unsigned long) VAR_6->tsq.next - (unsigned long) VAR_6->tsq.base,
        VAR_2);

 return 0;
}
