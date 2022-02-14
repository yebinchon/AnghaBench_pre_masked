
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct slic_rspqueue {int offset; int* paddr; size_t pageindex; int num_pages; struct slic_rspbuf* rspbuf; scalar_t__* vaddr; } ;
struct slic_rspbuf {int status; int hosthandle; } ;
struct adapter {TYPE_1__* slic_regs; struct slic_rspqueue rspqueue; } ;
struct TYPE_2__ {int slic_addr_upper; int slic_rbar64; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct adapter*,int *,int,int *,int ,int ) ;

__attribute__((used)) static struct slic_rspbuf *FUNC_2(struct adapter *VAR_2)
{
 struct slic_rspqueue *VAR_3 = &VAR_2->rspqueue;
 struct slic_rspbuf *VAR_4;

 if (!(VAR_3->rspbuf->status))
  return ((void*)0);

 VAR_4 = VAR_3->rspbuf;

 FUNC_0((VAR_4->status & 0xFFFFFFE0) == 0);

 FUNC_0(VAR_4->hosthandle);
 if (++VAR_3->offset < VAR_1) {
  VAR_3->rspbuf++;

  FUNC_0(((u32) VAR_3->rspbuf & 0xFFFFFFE0) ==
         (u32) VAR_3->rspbuf);

 } else {
  FUNC_0(VAR_3->offset == VAR_1);
  FUNC_1(VAR_2, &VAR_2->slic_regs->slic_rbar64,
   (VAR_3->paddr[VAR_3->pageindex] | VAR_1),
   &VAR_2->slic_regs->slic_addr_upper, 0, VAR_0);
  VAR_3->pageindex = (++VAR_3->pageindex) % VAR_3->num_pages;
  VAR_3->offset = 0;
  VAR_3->rspbuf = (struct slic_rspbuf *)
      VAR_3->vaddr[VAR_3->pageindex];

  FUNC_0(((u32) VAR_3->rspbuf & 0xFFFFF000) ==
         (u32) VAR_3->rspbuf);

 }

 FUNC_0(((u32) VAR_4 & 0xFFFFFFE0) == (u32) VAR_4);

 return VAR_4;
}
