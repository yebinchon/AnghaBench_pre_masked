
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_ls {int ls_dirtbl_size; } ;


 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static inline uint32_t FUNC_1(struct dlm_ls *VAR_0, char *VAR_1, int VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, 0);
 VAR_3 &= (VAR_0->ls_dirtbl_size - 1);

 return VAR_3;
}
