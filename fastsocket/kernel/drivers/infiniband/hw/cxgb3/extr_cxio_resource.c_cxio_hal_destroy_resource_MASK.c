
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxio_hal_resource {int pdid_fifo; int qpid_fifo; int cqid_fifo; int tpt_fifo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cxio_hal_resource*) ;

void FUNC_2(struct cxio_hal_resource *VAR_0)
{
 FUNC_0(VAR_0->tpt_fifo);
 FUNC_0(VAR_0->cqid_fifo);
 FUNC_0(VAR_0->qpid_fifo);
 FUNC_0(VAR_0->pdid_fifo);
 FUNC_1(VAR_0);
}
