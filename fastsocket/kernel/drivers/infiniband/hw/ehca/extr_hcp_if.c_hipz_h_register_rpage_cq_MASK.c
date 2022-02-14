
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ipz_cq_handle {int handle; } ;
struct ipz_adapter_handle {int dummy; } ;
struct h_galpa {int dummy; } ;
struct ehca_pfcq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int const) ;
 int FUNC_1 (struct ipz_adapter_handle const,int const,int const,int ,int const,int const) ;

u64 FUNC_2(const struct ipz_adapter_handle VAR_1,
        const struct ipz_cq_handle VAR_2,
        struct ehca_pfcq *VAR_3,
        const u8 VAR_4,
        const u8 VAR_5,
        const u64 VAR_6,
        const u64 VAR_7,
        const struct h_galpa VAR_8)
{
 if (VAR_7 != 1) {
  FUNC_0("Page counter=%llx", VAR_7);
  return VAR_0;
 }

 return FUNC_1(VAR_1, VAR_4, VAR_5,
         VAR_2.handle, VAR_6,
         VAR_7);
}
