
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ehca_shca {int ib_device; int ipz_hca_handle; } ;
struct ehca_eq {int ipz_queue; int interrupt_task; scalar_t__ is_initialized; int ist; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ,struct ehca_eq*) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ehca_shca *VAR_3, struct ehca_eq *VAR_4)
{
 unsigned long VAR_5;
 u64 VAR_6;

 FUNC_2(VAR_4->ist, (void *)VAR_3);

 FUNC_4(&VAR_2, VAR_5);
 VAR_4->is_initialized = 0;
 FUNC_5(&VAR_2, VAR_5);

 FUNC_6(&VAR_4->interrupt_task);

 VAR_6 = FUNC_1(VAR_3->ipz_hca_handle, VAR_4);

 if (VAR_6 != VAR_1) {
  FUNC_0(&VAR_3->ib_device, "Can't free EQ resources.");
  return -VAR_0;
 }
 FUNC_3(((void*)0), &VAR_4->ipz_queue);

 return 0;
}
