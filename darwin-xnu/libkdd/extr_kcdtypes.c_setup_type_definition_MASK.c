
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct kcdata_type_definition {char* kct_name; void* kct_num_elements; void* kct_type_identifier; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct kcdata_type_definition * VAR_0, uint32_t VAR_1, uint32_t VAR_2, char * VAR_3)
{
 VAR_0->kct_type_identifier = VAR_1;
 VAR_0->kct_num_elements = VAR_2;
 FUNC_0(VAR_0->kct_name, VAR_3, sizeof(VAR_0->kct_name));
 VAR_0->kct_name[sizeof(VAR_0->kct_name) - 1] = '\0';
}
