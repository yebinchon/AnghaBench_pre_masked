
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_unit {int erp_counter; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int,int *) ;
 int FUNC_5 (char*,void*,struct zfcp_unit*) ;

void FUNC_6(struct zfcp_unit *VAR_2, char *VAR_3, void *VAR_4,
     u32 VAR_5, int VAR_6)
{
 if (VAR_6 == VAR_0) {
  if (FUNC_4(VAR_5, &VAR_2->status))
   FUNC_5(VAR_3, VAR_4, VAR_2);
  FUNC_2(VAR_5, &VAR_2->status);
 } else {
  if (FUNC_3(VAR_5, &VAR_2->status))
   FUNC_5(VAR_3, VAR_4, VAR_2);
  FUNC_0(VAR_5, &VAR_2->status);
  if (VAR_5 & VAR_1) {
   FUNC_1(&VAR_2->erp_counter, 0);
  }
 }
}
