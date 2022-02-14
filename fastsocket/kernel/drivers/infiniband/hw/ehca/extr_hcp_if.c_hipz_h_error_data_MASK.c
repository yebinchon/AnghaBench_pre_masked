
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipz_adapter_handle {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int const,int,int ,int ,int ,int ) ;
 int FUNC_2 (void*) ;

u64 FUNC_3(const struct ipz_adapter_handle VAR_3,
        const u64 VAR_4,
        void *VAR_5,
        unsigned long *VAR_6)
{
 u64 VAR_7 = FUNC_2(VAR_5);

 if (VAR_7 & (VAR_0-1)) {
  FUNC_0("rblock not page aligned.");
  return VAR_2;
 }

 return FUNC_1(VAR_1,
           VAR_3.handle,
           VAR_4,
           VAR_7,
           0, 0, 0, 0);
}
