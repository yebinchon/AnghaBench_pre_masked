
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ipz_adapter_handle {int handle; } ;
struct hipz_query_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hipz_query_port*,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int const,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct hipz_query_port*) ;

u64 FUNC_4(const struct ipz_adapter_handle VAR_4,
        const u8 VAR_5,
        struct hipz_query_port *VAR_6)
{
 u64 VAR_7;
 u64 VAR_8 = FUNC_3(VAR_6);

 if (VAR_8 & (VAR_0-1)) {
  FUNC_1("response block not page aligned");
  return VAR_1;
 }

 VAR_7 = FUNC_2(VAR_2,
          VAR_4.handle,
          VAR_5,
          VAR_8,
          0, 0, 0, 0);

 if (VAR_3 >= 2)
  FUNC_0(VAR_6, 64, "response_block");

 return VAR_7;
}
