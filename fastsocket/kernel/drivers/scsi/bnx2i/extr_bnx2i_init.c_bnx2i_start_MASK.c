
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2i_hba {int adapter_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2i_hba*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(void *VAR_4)
{

 struct bnx2i_hba *VAR_5 = VAR_4;
 int VAR_6 = VAR_3;






 FUNC_0(VAR_5);
 while (!FUNC_2(VAR_1, &VAR_5->adapter_state) &&
        !FUNC_2(VAR_0, &VAR_5->adapter_state) && VAR_6--)
  FUNC_1((1000 / VAR_3));
}
