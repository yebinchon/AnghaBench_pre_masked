
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int rbuf_count; unsigned int tbuf_count; struct slgt_desc* tbufs; struct slgt_desc* rbufs; scalar_t__ bufs_dma_addr; int * bufs; int pdev; } ;
struct slgt_desc {unsigned int pdesc; void* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (struct slgt_desc,int ) ;

__attribute__((used)) static int FUNC_4(struct slgt_info *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;


 VAR_3->bufs = FUNC_2(VAR_3->pdev, VAR_0, &VAR_3->bufs_dma_addr);
 if (VAR_3->bufs == ((void*)0))
  return -VAR_2;

 FUNC_1(VAR_3->bufs, 0, VAR_0);

 VAR_3->rbufs = (struct slgt_desc*)VAR_3->bufs;
 VAR_3->tbufs = ((struct slgt_desc*)VAR_3->bufs) + VAR_3->rbuf_count;

 VAR_5 = (unsigned int)VAR_3->bufs_dma_addr;





 for (VAR_4=0; VAR_4 < VAR_3->rbuf_count; VAR_4++) {

  VAR_3->rbufs[VAR_4].pdesc = VAR_5 + (VAR_4 * sizeof(struct slgt_desc));


  if (VAR_4 == VAR_3->rbuf_count - 1)
   VAR_3->rbufs[VAR_4].next = FUNC_0(VAR_5);
  else
   VAR_3->rbufs[VAR_4].next = FUNC_0(VAR_5 + ((VAR_4+1) * sizeof(struct slgt_desc)));
  FUNC_3(VAR_3->rbufs[VAR_4], VAR_1);
 }

 for (VAR_4=0; VAR_4 < VAR_3->tbuf_count; VAR_4++) {

  VAR_3->tbufs[VAR_4].pdesc = VAR_5 + ((VAR_3->rbuf_count + VAR_4) * sizeof(struct slgt_desc));


  if (VAR_4 == VAR_3->tbuf_count - 1)
   VAR_3->tbufs[VAR_4].next = FUNC_0(VAR_5 + VAR_3->rbuf_count * sizeof(struct slgt_desc));
  else
   VAR_3->tbufs[VAR_4].next = FUNC_0(VAR_5 + ((VAR_3->rbuf_count + VAR_4 + 1) * sizeof(struct slgt_desc)));
 }

 return 0;
}
