
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct ipz_adapter_handle {int handle; } ;
struct TYPE_2__ {int handle; } ;
struct ehca_mr {TYPE_1__ ipz_mr_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const) ;
 int VAR_2 ;
 int FUNC_1 (char*,void*,...) ;
 int FUNC_2 (char*,int ,struct ehca_mr const*,int ,int const,int const,int const,int const) ;
 int FUNC_3 (struct ipz_adapter_handle const,int const,int const,int ,int const,int const) ;
 scalar_t__ FUNC_4 (int) ;

u64 FUNC_5(const struct ipz_adapter_handle VAR_3,
        const struct ehca_mr *VAR_4,
        const u8 VAR_5,
        const u8 VAR_6,
        const u64 VAR_7,
        const u64 VAR_8)
{
 u64 VAR_9;

 if (FUNC_4(VAR_2 >= 3)) {
  if (VAR_8 > 1) {
   u64 *VAR_10;
   int VAR_11;
   VAR_10 = (u64 *)FUNC_0(VAR_7);
   for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
    FUNC_1("kpage[%d]=%p",
          VAR_11, (void *)VAR_10[VAR_11]);
  } else
   FUNC_1("kpage=%p",
         (void *)VAR_7);
 }

 if ((VAR_8 > 1) && (VAR_7 & (VAR_0-1))) {
  FUNC_2("logical_address_of_page not on a 4k boundary "
        "adapter_handle=%llx mr=%p mr_handle=%llx "
        "pagesize=%x queue_type=%x "
        "logical_address_of_page=%llx count=%llx",
        VAR_3.handle, VAR_4,
        VAR_4->ipz_mr_handle.handle, VAR_5, VAR_6,
        VAR_7, VAR_8);
  VAR_9 = VAR_1;
 } else
  VAR_9 = FUNC_3(VAR_3, VAR_5,
         VAR_6,
         VAR_4->ipz_mr_handle.handle,
         VAR_7, VAR_8);
 return VAR_9;
}
