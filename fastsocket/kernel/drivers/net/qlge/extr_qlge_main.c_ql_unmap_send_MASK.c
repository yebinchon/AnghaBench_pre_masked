
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring_desc {int * map; } ;
struct ql_adapter {int pdev; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,int ,char*,...) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct ql_adapter *VAR_5,
     struct tx_ring_desc *VAR_6, int VAR_7)
{
 int VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_8 == 0 || (VAR_8 == 7 && VAR_7 > 7)) {
   if (VAR_8 == 7) {
    FUNC_0(VAR_5, VAR_4, VAR_0,
          VAR_5->ndev,
          "unmapping OAL area.\n");
   }
   FUNC_4(VAR_5->pdev,
      FUNC_1(&VAR_6->map[VAR_8],
       VAR_2),
      FUNC_2(&VAR_6->map[VAR_8],
             VAR_3),
      VAR_1);
  } else {
   FUNC_0(VAR_5, VAR_4, VAR_0, VAR_5->ndev,
         "unmapping frag %d.\n", VAR_8);
   FUNC_3(VAR_5->pdev,
           FUNC_1(&VAR_6->map[VAR_8],
            VAR_2),
           FUNC_2(&VAR_6->map[VAR_8],
           VAR_3), VAR_1);
  }
 }

}
