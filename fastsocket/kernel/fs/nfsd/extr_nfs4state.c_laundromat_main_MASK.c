
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct work_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_3(struct work_struct *VAR_3)
{
 time_t VAR_4;

 VAR_4 = FUNC_1();
 FUNC_0("NFSD: laundromat_main - sleeping for %ld seconds\n", VAR_4);
 FUNC_2(VAR_2, &VAR_1, VAR_4*VAR_0);
}
