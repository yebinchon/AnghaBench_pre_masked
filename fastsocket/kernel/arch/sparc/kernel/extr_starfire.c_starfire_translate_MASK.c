
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct starfire_irqinfo {unsigned int hwmid; unsigned long* imap_slots; int * tregs; struct starfire_irqinfo* next; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,unsigned long) ;
 struct starfire_irqinfo* VAR_0 ;
 int FUNC_4 (unsigned int,int ) ;

unsigned int FUNC_5(unsigned long VAR_1,
    unsigned int VAR_2)
{
 struct starfire_irqinfo *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_4 = (((unsigned long)VAR_1) >> 33) & 0x7f;
 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if (VAR_3->hwmid == VAR_4)
   break;
 if (VAR_3 == ((void*)0)) {
  FUNC_3("XFIRE: Cannot find irqinfo for imap %016lx\n",
       ((unsigned long)VAR_1));
  FUNC_2();
 }
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  if (VAR_3->imap_slots[VAR_5] == VAR_1 ||
      VAR_3->imap_slots[VAR_5] == 0UL)
   break;
 }
 if (VAR_5 == 32) {
  FUNC_1("starfire_translate: Are you kidding me?\n");
  FUNC_0("Lucy in the sky....");
 }
 VAR_3->imap_slots[VAR_5] = VAR_1;


 VAR_2 = (((VAR_2 & 0x3c) << 1) |
   ((VAR_2 & 0x40) >> 4) |
   (VAR_2 & 0x3));

 FUNC_4(VAR_2, VAR_3->tregs[VAR_5]);

 return VAR_5;
}
