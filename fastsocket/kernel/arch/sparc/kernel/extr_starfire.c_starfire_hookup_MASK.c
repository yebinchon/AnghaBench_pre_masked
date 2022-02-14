
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct starfire_irqinfo {unsigned long hwmid; unsigned long* imap_slots; unsigned long* tregs; int upaid; struct starfire_irqinfo* next; } ;


 int VAR_0 ;
 struct starfire_irqinfo* FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 struct starfire_irqinfo* VAR_1 ;
 scalar_t__ FUNC_3 (unsigned long) ;

void FUNC_4(int VAR_2)
{
 struct starfire_irqinfo *VAR_3;
 unsigned long VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_2("starfire_hookup: No memory, this is insane.\n");
  FUNC_1();
 }
 VAR_4 = 0x100fc000000UL;
 VAR_5 = ((VAR_2 & 0x3c) << 1) |
  ((VAR_2 & 0x40) >> 4) |
  (VAR_2 & 0x3);
 VAR_3->hwmid = VAR_5;
 VAR_4 += (VAR_5 << 33UL);
 VAR_4 += 0x200UL;
 for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
  VAR_3->imap_slots[VAR_6] = 0UL;
  VAR_3->tregs[VAR_6] = VAR_4 + (VAR_6 * 0x10UL);

  if (FUNC_3(VAR_3->tregs[VAR_6]) != 0)
   VAR_3->imap_slots[VAR_6] = 0xdeadbeaf;
 }
 VAR_3->upaid = VAR_2;
 VAR_3->next = VAR_1;
 VAR_1 = VAR_3;
}
