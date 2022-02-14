
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ibmveth_buf_desc {int desc; } ;
typedef int u64 ;
struct ibmveth_adapter {TYPE_1__* vdev; int filter_list_dma; int buffer_list_dma; } ;
struct TYPE_2__ {int unit_address; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ibmveth_adapter *VAR_2,
        union ibmveth_buf_desc VAR_3, u64 VAR_4)
{
 int VAR_5, VAR_6 = 1;






retry:
 VAR_5 = FUNC_2(VAR_2->vdev->unit_address,
        VAR_2->buffer_list_dma, VAR_3.desc,
        VAR_2->filter_list_dma, VAR_4);

 if (VAR_5 != VAR_1 && VAR_6) {
  do {
   VAR_5 = FUNC_1(VAR_2->vdev->unit_address);
  } while (FUNC_0(VAR_5) || (VAR_5 == VAR_0));

  VAR_6 = 0;
  goto retry;
 }

 return VAR_5;
}
