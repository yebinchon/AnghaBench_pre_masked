
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2i_hba {int adapter_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct bnx2i_hba *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_4 || !FUNC_0(VAR_2, &VAR_4->adapter_state) ||
     FUNC_0(VAR_0, &VAR_4->adapter_state) ||
     FUNC_0(VAR_1, &VAR_4->adapter_state))
  VAR_5 = -VAR_3;
 return VAR_5;
}
