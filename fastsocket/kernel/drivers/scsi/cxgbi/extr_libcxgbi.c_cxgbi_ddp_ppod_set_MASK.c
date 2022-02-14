
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_pagepod_hdr {int dummy; } ;
struct cxgbi_pagepod {unsigned long long* addr; } ;
struct cxgbi_gather_list {unsigned int nelem; int * phys_addr; } ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (struct cxgbi_pagepod*,struct cxgbi_pagepod_hdr*,int) ;

void FUNC_2(struct cxgbi_pagepod *VAR_1,
   struct cxgbi_pagepod_hdr *VAR_2,
   struct cxgbi_gather_list *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_1, VAR_2, sizeof(*VAR_2));
 for (VAR_5 = 0; VAR_5 < (VAR_0 + 1); VAR_5++, VAR_4++) {
  VAR_1->addr[VAR_5] = VAR_4 < VAR_3->nelem ?
    FUNC_0(VAR_3->phys_addr[VAR_4]) : 0ULL;
 }
}
