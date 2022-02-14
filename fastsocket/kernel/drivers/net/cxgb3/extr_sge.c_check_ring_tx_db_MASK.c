
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {int cntxt_id; int flags; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct adapter*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 () ;

__attribute__((used)) static inline void FUNC_6(struct adapter *VAR_4, struct sge_txq *VAR_5)
{
 FUNC_5();
 FUNC_3(VAR_4, VAR_0,
       VAR_1 | FUNC_0(VAR_5->cntxt_id));

}
