
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ql_adapter {int rss_ring_count; int func; int ndev; TYPE_1__* rx_ring; int flags; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ql_adapter*) ;
 int FUNC_5 (struct ql_adapter*) ;
 int FUNC_6 (struct ql_adapter*) ;
 int FUNC_7 (struct ql_adapter*) ;
 int FUNC_8 (struct ql_adapter*) ;
 int FUNC_9 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_10(struct ql_adapter *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 FUNC_8(VAR_2);

 FUNC_5(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2->rss_ring_count; VAR_3++)
  FUNC_1(&VAR_2->rx_ring[VAR_3].napi);

 FUNC_0(VAR_0, &VAR_2->flags);

 FUNC_6(VAR_2);

 FUNC_9(VAR_2);



 for (VAR_3 = 0; VAR_3 < VAR_2->rss_ring_count; VAR_3++)
  FUNC_3(&VAR_2->rx_ring[VAR_3].napi);

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  FUNC_2(VAR_2, VAR_1, VAR_2->ndev, "reset(func #%d) FAILED!\n",
     VAR_2->func);
 FUNC_7(VAR_2);
 return VAR_4;
}
