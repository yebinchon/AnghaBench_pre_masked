
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cnic_ulp_ops {int (* indicate_netevent ) (void*,unsigned long,int ) ;} ;
struct cnic_local {void** ulp_handle; int * ulp_ops; } ;


 int VAR_0 ;
 struct cnic_ulp_ops* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (void*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_4(struct cnic_local *VAR_1, unsigned long VAR_2,
         u16 VAR_3)
{
 int VAR_4;

 FUNC_1();
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct cnic_ulp_ops *VAR_5;
  void *VAR_6;

  VAR_5 = FUNC_0(VAR_1->ulp_ops[VAR_4]);
  if (!VAR_5 || !VAR_5->indicate_netevent)
   continue;

  VAR_6 = VAR_1->ulp_handle[VAR_4];

  VAR_5->indicate_netevent(VAR_6, VAR_2, VAR_3);
 }
 FUNC_2();
}
