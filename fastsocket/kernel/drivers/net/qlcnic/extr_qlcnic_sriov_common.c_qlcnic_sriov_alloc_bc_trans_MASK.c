
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_bc_trans {int resp_cmpl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct qlcnic_bc_trans* FUNC_1 (int,int ) ;

__attribute__((used)) static inline int FUNC_2(struct qlcnic_bc_trans **VAR_2)
{
 *VAR_2 = FUNC_1(sizeof(struct qlcnic_bc_trans), VAR_1);
 if (!*VAR_2)
  return -VAR_0;

 FUNC_0(&(*VAR_2)->resp_cmpl);
 return 0;
}
