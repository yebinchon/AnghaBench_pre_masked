
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dmov_cmd {int list; int cmdptr; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;
 int FUNC_4 (char*,unsigned int) ;
 int FUNC_5 (char*,unsigned int,unsigned int) ;
 int * VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_5 ;
 unsigned int FUNC_9 (int ) ;
 int * VAR_6 ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int ) ;

void FUNC_13(unsigned VAR_7, struct msm_dmov_cmd *VAR_8)
{
 unsigned long VAR_9;
 unsigned int VAR_10;

 FUNC_10(&VAR_5, VAR_9);
 VAR_10 = FUNC_9(FUNC_2(VAR_7));
 if (FUNC_8(&VAR_6[VAR_7]) &&
  (VAR_10 & VAR_1)) {






  FUNC_5("msm_dmov_enqueue_cmd(%d), start command, status %x\n", VAR_7, VAR_10);
  FUNC_7(&VAR_8->list, &VAR_3[VAR_7]);
  if (!VAR_4)
   FUNC_6(VAR_2);
  VAR_4 |= 1U << VAR_7;
  FUNC_12(VAR_8->cmdptr, FUNC_0(VAR_7));
 } else {
  if (FUNC_8(&VAR_3[VAR_7]))
   FUNC_3("msm_dmov_enqueue_cmd(%d), error datamover stalled, status %x\n", VAR_7, VAR_10);

  FUNC_5("msm_dmov_enqueue_cmd(%d), enqueue command, status %x\n", VAR_7, VAR_10);
  FUNC_7(&VAR_8->list, &VAR_6[VAR_7]);
 }
 FUNC_11(&VAR_5, VAR_9);
}
