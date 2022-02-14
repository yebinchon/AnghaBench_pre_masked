
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int current_state; } ;
struct qib_pportdata {int sdma_lock; TYPE_1__ sdma_state; int port; struct qib_devdata* dd; } ;
struct qib_devdata {int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qib_pportdata*,int ) ;
 int FUNC_1 (struct qib_devdata*,char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct qib_pportdata *VAR_7, u64 VAR_8)
{
 unsigned long VAR_9;
 struct qib_devdata *VAR_10 = VAR_7->dd;

 VAR_8 &= VAR_0;

 if (VAR_8 & VAR_2)
  FUNC_1(VAR_10, "IB%u:%u SDmaUnexpData\n", VAR_10->unit,
       VAR_7->port);

 FUNC_2(&VAR_7->sdma_lock, VAR_9);

 switch (VAR_7->sdma_state.current_state) {
 case 134:
  break;

 case 133:
  if (VAR_8 & VAR_1)
   FUNC_0(VAR_7,
    VAR_3);
  break;

 case 132:
  break;

 case 131:
  break;

 case 130:
  if (VAR_8 & VAR_1)
   FUNC_0(VAR_7,
    VAR_4);
  break;

 case 129:
  if (VAR_8 & VAR_1)
   FUNC_0(VAR_7,
    VAR_5);
  break;

 case 128:
  FUNC_0(VAR_7, VAR_6);
  FUNC_0(VAR_7, VAR_5);
  break;
 }

 FUNC_3(&VAR_7->sdma_lock, VAR_9);
}
