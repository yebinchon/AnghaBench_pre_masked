
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scnhdr {void* s_flags; void* s_nlnno; void* s_nreloc; void* s_lnnoptr; void* s_relptr; void* s_scnptr; void* s_size; void* s_vaddr; void* s_paddr; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct scnhdr *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++, VAR_0++) {
  VAR_0->s_paddr = FUNC_1(VAR_0->s_paddr);
  VAR_0->s_vaddr = FUNC_1(VAR_0->s_vaddr);
  VAR_0->s_size = FUNC_1(VAR_0->s_size);
  VAR_0->s_scnptr = FUNC_1(VAR_0->s_scnptr);
  VAR_0->s_relptr = FUNC_1(VAR_0->s_relptr);
  VAR_0->s_lnnoptr = FUNC_1(VAR_0->s_lnnoptr);
  VAR_0->s_nreloc = FUNC_0(VAR_0->s_nreloc);
  VAR_0->s_nlnno = FUNC_0(VAR_0->s_nlnno);
  VAR_0->s_flags = FUNC_1(VAR_0->s_flags);
 }
}
