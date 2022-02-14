
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba {int link_state; scalar_t__ MBslimaddr; int HSregaddr; TYPE_1__* pport; } ;
struct TYPE_2__ {int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_hba *VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;


 if (FUNC_1(VAR_5->HSregaddr, &VAR_7))
  return 1;







 while (((VAR_7 & VAR_6) != VAR_6) &&
        !(VAR_7 & VAR_0) &&
        VAR_8++ < 20) {

  if (VAR_8 <= 5)
   FUNC_3(10);
  else if (VAR_8 <= 10)
   FUNC_3(500);
  else
   FUNC_3(2500);

  if (VAR_8 == 15) {

   VAR_5->pport->port_state = VAR_4;
   FUNC_2(VAR_5);
  }

  if (FUNC_1(VAR_5->HSregaddr, &VAR_7)) {
   VAR_9 = 1;
   break;
  }
 }


 if ((VAR_7 & VAR_0) || (VAR_8 >= 20)) {
  FUNC_0(VAR_5, VAR_1, VAR_2,
    "2751 Adapter failed to restart, "
    "status reg x%x, FW Data: A8 x%x AC x%x\n",
    VAR_7,
    FUNC_4(VAR_5->MBslimaddr + 0xa8),
    FUNC_4(VAR_5->MBslimaddr + 0xac));
  VAR_5->link_state = VAR_3;
  VAR_9 = 1;
 }

 return VAR_9;
}
