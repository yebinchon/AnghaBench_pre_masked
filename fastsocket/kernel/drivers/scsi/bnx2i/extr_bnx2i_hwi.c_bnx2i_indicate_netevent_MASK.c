
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bnx2i_hba {int shost; int adapter_state; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (struct bnx2i_hba*) ;
 int FUNC_1 (struct bnx2i_hba*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_3, unsigned long VAR_4,
        u16 VAR_5)
{
 struct bnx2i_hba *VAR_6 = VAR_3;


 if (VAR_5 != 0)
  return;

 switch (VAR_4) {
 case 128:
  if (!FUNC_5(VAR_1, &VAR_6->adapter_state))
   FUNC_1(VAR_6);
  break;
 case 130:
  FUNC_2(VAR_0, &VAR_6->adapter_state);
  FUNC_2(VAR_1, &VAR_6->adapter_state);
  break;
 case 129:
  FUNC_4(VAR_0, &VAR_6->adapter_state);
  FUNC_3(VAR_6->shost,
         VAR_2);
  break;
 case 131:
  FUNC_0(VAR_6);
  break;
 default:
  ;
 }
}
