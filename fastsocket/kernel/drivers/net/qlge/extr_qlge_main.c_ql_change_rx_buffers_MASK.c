
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rx_ring {int lbq_buf_size; } ;
struct ql_adapter {int rss_ring_count; TYPE_1__* ndev; int flags; struct rx_ring* rx_ring; int lbq_buf_order; } ;
struct TYPE_4__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct ql_adapter*,int ,TYPE_1__*,char*) ;
 int FUNC_3 (struct ql_adapter*,int ,TYPE_1__*,char*) ;
 int FUNC_4 (struct ql_adapter*) ;
 int FUNC_5 (struct ql_adapter*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct ql_adapter *VAR_5)
{
 struct rx_ring *VAR_6;
 int VAR_7, VAR_8;
 u32 VAR_9;


 if (!FUNC_8(VAR_3, &VAR_5->flags)) {
  int VAR_10 = 3;
  while (VAR_10-- && !FUNC_8(VAR_3, &VAR_5->flags)) {
   FUNC_3(VAR_5, VAR_4, VAR_5->ndev,
      "Waiting for adapter UP...\n");
   FUNC_7(1);
  }

  if (!VAR_10) {
   FUNC_3(VAR_5, VAR_4, VAR_5->ndev,
      "Timed out waiting for adapter UP\n");
   return -VAR_0;
  }
 }

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8)
  goto error;


 VAR_9 = (VAR_5->ndev->mtu > 1500) ?
  VAR_1 : VAR_2;
 VAR_5->lbq_buf_order = FUNC_1(VAR_9);

 for (VAR_7 = 0; VAR_7 < VAR_5->rss_ring_count; VAR_7++) {
  VAR_6 = &VAR_5->rx_ring[VAR_7];

  VAR_6->lbq_buf_size = VAR_9;
 }

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8)
  goto error;

 return VAR_8;
error:
 FUNC_2(VAR_5, VAR_4, VAR_5->ndev,
      "Driver up/down cycle failed, closing device.\n");
 FUNC_6(VAR_3, &VAR_5->flags);
 FUNC_0(VAR_5->ndev);
 return VAR_8;
}
