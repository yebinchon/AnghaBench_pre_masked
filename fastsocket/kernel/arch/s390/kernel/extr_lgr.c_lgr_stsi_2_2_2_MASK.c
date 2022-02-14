
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo_2_2_2 {int lpar_number; int name; } ;
struct lgr_info {int lpar_number; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct sysinfo_2_2_2*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct lgr_info *VAR_2)
{
 struct sysinfo_2_2_2 *VAR_3 = (void *) VAR_1;

 if (FUNC_2(VAR_3, 2, 2, 2) == -VAR_0)
  return;
 FUNC_0(VAR_2->name, VAR_3->name, sizeof(VAR_3->name));
 FUNC_1(&VAR_2->lpar_number, &VAR_3->lpar_number,
        sizeof(VAR_2->lpar_number));
}
