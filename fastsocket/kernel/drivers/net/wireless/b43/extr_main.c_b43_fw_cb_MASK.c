
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct b43_request_fw_context {int fw_load_complete; struct firmware const* blob; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(const struct firmware *VAR_0, void *VAR_1)
{
 struct b43_request_fw_context *VAR_2 = VAR_1;

 VAR_2->blob = VAR_0;
 FUNC_0(&VAR_2->fw_load_complete);
}
