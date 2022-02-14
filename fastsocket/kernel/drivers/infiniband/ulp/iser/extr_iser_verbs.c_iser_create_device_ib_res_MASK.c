
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct iser_device {int cqs_used; struct iser_cq_desc* cq_desc; void* pd; void** rx_cq; void** tx_cq; int * cq_tasklet; void* mr; int event_handler; TYPE_1__* ib_device; } ;
struct iser_cq_desc {int cq_index; struct iser_device* device; } ;
struct TYPE_4__ {int num_comp_vectors; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (TYPE_1__*,int *,int ,void*,int ,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (void*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (void*,int ) ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (char*) ;
 int VAR_11 ;
 int FUNC_11 (char*,int,int ,int ) ;
 int FUNC_12 (struct iser_cq_desc*) ;
 struct iser_cq_desc* FUNC_13 (int,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,int ,unsigned long) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct iser_device *VAR_12)
{
 int VAR_13, VAR_14;
 struct iser_cq_desc *VAR_15;

 VAR_12->cqs_used = FUNC_14(VAR_5, VAR_12->ib_device->num_comp_vectors);
 FUNC_11("using %d CQs, device %s supports %d vectors\n",
    VAR_12->cqs_used, VAR_12->ib_device->name,
    VAR_12->ib_device->num_comp_vectors);

 VAR_12->cq_desc = FUNC_13(sizeof(struct iser_cq_desc) * VAR_12->cqs_used,
      VAR_0);
 if (VAR_12->cq_desc == ((void*)0))
  goto cq_desc_err;
 VAR_15 = VAR_12->cq_desc;

 VAR_12->pd = FUNC_2(VAR_12->ib_device);
 if (FUNC_1(VAR_12->pd))
  goto pd_err;

 for (VAR_13 = 0; VAR_13 < VAR_12->cqs_used; VAR_13++) {
  VAR_15[VAR_13].device = VAR_12;
  VAR_15[VAR_13].cq_index = VAR_13;

  VAR_12->rx_cq[VAR_13] = FUNC_3(VAR_12->ib_device,
       VAR_8,
       VAR_9,
       (void *)&VAR_15[VAR_13],
       VAR_6, VAR_13);
  if (FUNC_1(VAR_12->rx_cq[VAR_13]))
   goto cq_err;

  VAR_12->tx_cq[VAR_13] = FUNC_3(VAR_12->ib_device,
       ((void*)0), VAR_9,
       (void *)&VAR_15[VAR_13],
       VAR_7, VAR_13);

  if (FUNC_1(VAR_12->tx_cq[VAR_13]))
   goto cq_err;

  if (FUNC_9(VAR_12->rx_cq[VAR_13], VAR_4))
   goto cq_err;

  FUNC_15(&VAR_12->cq_tasklet[VAR_13],
        VAR_10,
   (unsigned long)&VAR_15[VAR_13]);
 }

 VAR_12->mr = FUNC_7(VAR_12->pd, VAR_1 |
       VAR_3 |
       VAR_2);
 if (FUNC_1(VAR_12->mr))
  goto dma_mr_err;

 FUNC_0(&VAR_12->event_handler, VAR_12->ib_device,
    VAR_11);
 if (FUNC_8(&VAR_12->event_handler))
  goto handler_err;

 return 0;

handler_err:
 FUNC_5(VAR_12->mr);
dma_mr_err:
 for (VAR_14 = 0; VAR_14 < VAR_12->cqs_used; VAR_14++)
  FUNC_16(&VAR_12->cq_tasklet[VAR_14]);
cq_err:
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  if (VAR_12->tx_cq[VAR_14])
   FUNC_6(VAR_12->tx_cq[VAR_14]);
  if (VAR_12->rx_cq[VAR_14])
   FUNC_6(VAR_12->rx_cq[VAR_14]);
 }
 FUNC_4(VAR_12->pd);
pd_err:
 FUNC_12(VAR_12->cq_desc);
cq_desc_err:
 FUNC_10("failed to allocate an IB resource\n");
 return -1;
}
