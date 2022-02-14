
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmf_handlers {int dummy; } ;
struct pmf_cmd {int dummy; } ;


 int FUNC_0 (char*,void const*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,struct pmf_cmd*,struct pmf_handlers*,int ,void const*,void const*) ;
 int VAR_0 ;
 int FUNC_3 (struct pmf_cmd*) ;
 void* FUNC_4 (struct pmf_cmd*,int ) ;

__attribute__((used)) static int FUNC_5(struct pmf_cmd *VAR_1,
           struct pmf_handlers *VAR_2)
{
 u32 VAR_3 = FUNC_3(VAR_1);
 const void *VAR_4 = FUNC_4(VAR_1, VAR_3);
 const void *VAR_5 = FUNC_4(VAR_1, VAR_3);

 FUNC_1("pmf: mask_and_compare(length: %ud ...\n", VAR_3);
 FUNC_0("pmf:   mask data: \n", VAR_4, VAR_3);
 FUNC_0("pmf:   values data: \n", VAR_5, VAR_3);

 FUNC_2(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4, VAR_5);
}
