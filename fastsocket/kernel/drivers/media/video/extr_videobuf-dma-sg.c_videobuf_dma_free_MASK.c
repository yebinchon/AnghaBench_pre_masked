
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dmabuf {int nr_pages; int direction; scalar_t__ bus_addr; int * vaddr; int * pages; int sglen; int magic; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct videobuf_dmabuf *VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_2->magic, VAR_1);
 FUNC_0(VAR_2->sglen);

 if (VAR_2->pages) {
  for (VAR_3 = 0; VAR_3 < VAR_2->nr_pages; VAR_3++)
   FUNC_3(VAR_2->pages[VAR_3]);
  FUNC_2(VAR_2->pages);
  VAR_2->pages = ((void*)0);
 }

 FUNC_4(VAR_2->vaddr);
 VAR_2->vaddr = ((void*)0);

 if (VAR_2->bus_addr)
  VAR_2->bus_addr = 0;
 VAR_2->direction = VAR_0;

 return 0;
}
