
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {int pend_cred; int cntxt_id; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct adapter*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(struct adapter *VAR_2, struct sge_fl *VAR_3)
{
 if (VAR_3->pend_cred >= 8) {
  FUNC_4();
  FUNC_3(VAR_2, FUNC_0(VAR_1), VAR_0 |
        FUNC_2(VAR_3->cntxt_id) | FUNC_1(VAR_3->pend_cred / 8));
  VAR_3->pend_cred &= 7;
 }
}
