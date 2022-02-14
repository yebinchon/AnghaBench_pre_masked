
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int current_state; } ;
struct qib_pportdata {int sdma_lock; TYPE_1__ sdma_state; } ;


 int FUNC_0 (struct qib_pportdata*) ;
 int FUNC_1 (struct qib_pportdata*,int ) ;
 int VAR_0 ;
 int VAR_1 ;







 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct qib_pportdata *VAR_2, u64 VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2->sdma_lock, VAR_4);

 switch (VAR_2->sdma_state.current_state) {
 case 134:
  break;

 case 133:
  FUNC_1(VAR_2, VAR_0);
  break;

 case 132:
  break;

 case 131:
  break;

 case 130:
  break;

 case 129:
  FUNC_1(VAR_2, VAR_1);
  break;

 case 128:

  FUNC_0(VAR_2);
  break;
 }
 FUNC_3(&VAR_2->sdma_lock, VAR_4);
}
