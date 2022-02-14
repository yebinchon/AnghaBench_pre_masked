
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lockgroup_info_t ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_5 ;

void
FUNC_4(void)
{
 VAR_4 = FUNC_0(VAR_1, sizeof(lockgroup_info_t));
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_5, "Can't allocate memory for lockgroup info\n");
  FUNC_1 (VAR_0);
 }
 FUNC_3(VAR_4, VAR_3, VAR_1 * sizeof(lockgroup_info_t));

 VAR_2 = FUNC_0(VAR_1, sizeof(lockgroup_info_t));
 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_5, "Can't allocate memory for lockgroup info\n");
  FUNC_1 (VAR_0);
 }
}
