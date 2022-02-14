
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sge_rspq {scalar_t__ pktcnt_idx; int intr_params; int cntxt_id; scalar_t__ desc; } ;
struct adapter {int sge; int fn; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (struct adapter*,int ,int ,int ,int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_7(struct adapter *VAR_3, struct sge_rspq *VAR_4,
          unsigned int VAR_5, unsigned int VAR_6)
{
 if ((VAR_5 | VAR_6) == 0)
  VAR_6 = 1;

 if (VAR_6) {
  int VAR_7;
  u32 VAR_8, VAR_9;

  VAR_9 = FUNC_4(&VAR_3->sge, VAR_6);
  if (VAR_4->desc && VAR_4->pktcnt_idx != VAR_9) {

   VAR_8 = FUNC_0(VAR_0) |
       FUNC_1(VAR_1) |
       FUNC_2(VAR_4->cntxt_id);
   VAR_7 = FUNC_6(VAR_3, VAR_3->fn, VAR_3->fn, 0, 1, &VAR_8,
         &VAR_9);
   if (VAR_7)
    return VAR_7;
  }
  VAR_4->pktcnt_idx = VAR_9;
 }

 VAR_5 = VAR_5 == 0 ? 6 : FUNC_5(&VAR_3->sge, VAR_5);
 VAR_4->intr_params = FUNC_3(VAR_5) | (VAR_6 > 0 ? VAR_2 : 0);
 return 0;
}
