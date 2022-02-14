
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sbp2_target {int dummy; } ;
struct fw_csr_iterator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fw_csr_iterator*,int *) ;
 scalar_t__ FUNC_1 (struct fw_csr_iterator*,int*,int*) ;
 scalar_t__ FUNC_2 (struct sbp2_target*,int) ;

__attribute__((used)) static int FUNC_3(struct sbp2_target *VAR_2, u32 *VAR_3)
{
 struct fw_csr_iterator VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(&VAR_4, VAR_3);
 while (FUNC_1(&VAR_4, &VAR_5, &VAR_6))
  if (VAR_5 == VAR_1 &&
      FUNC_2(VAR_2, VAR_6) < 0)
   return -VAR_0;
 return 0;
}
