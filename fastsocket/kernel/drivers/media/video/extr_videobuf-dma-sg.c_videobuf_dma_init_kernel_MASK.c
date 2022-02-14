
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dmabuf {int direction; int nr_pages; int * vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,unsigned long,...) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int) ;

int FUNC_3(struct videobuf_dmabuf *VAR_2, int VAR_3,
        int VAR_4)
{
 FUNC_0(1, "init kernel [%d pages]\n", VAR_4);

 VAR_2->direction = VAR_3;
 VAR_2->vaddr = FUNC_2(VAR_4 << VAR_1);
 if (((void*)0) == VAR_2->vaddr) {
  FUNC_0(1, "vmalloc_32(%d pages) failed\n", VAR_4);
  return -VAR_0;
 }

 FUNC_0(1, "vmalloc is at addr 0x%08lx, size=%d\n",
    (unsigned long)VAR_2->vaddr,
    VAR_4 << VAR_1);

 FUNC_1(VAR_2->vaddr, 0, VAR_4 << VAR_1);
 VAR_2->nr_pages = VAR_4;

 return 0;
}
