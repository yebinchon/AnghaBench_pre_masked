
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int device_pool; int hcc_params; } ;
struct xhci_container_ctx {int type; int size; int bytes; int dma; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int *) ;
 struct xhci_container_ctx* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static struct xhci_container_ctx *FUNC_6(struct xhci_hcd *VAR_2,
          int VAR_3, gfp_t VAR_4)
{
 struct xhci_container_ctx *VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_4);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0((VAR_3 != VAR_0) && (VAR_3 != VAR_1));
 VAR_5->type = VAR_3;
 VAR_5->size = FUNC_2(VAR_2->hcc_params) ? 2048 : 1024;
 if (VAR_3 == VAR_1)
  VAR_5->size += FUNC_1(VAR_2->hcc_params);

 VAR_5->bytes = FUNC_3(VAR_2->device_pool, VAR_4, &VAR_5->dma);
 FUNC_5(VAR_5->bytes, 0, VAR_5->size);
 return VAR_5;
}
