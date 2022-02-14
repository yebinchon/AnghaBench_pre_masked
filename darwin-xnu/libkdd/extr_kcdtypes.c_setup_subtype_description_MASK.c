
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int kctype_subtype_t ;
typedef TYPE_1__* kcdata_subtype_descriptor_t ;
struct TYPE_3__ {char* kcs_name; int kcs_elem_size; int kcs_elem_offset; int kcs_elem_type; int kcs_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(kcdata_subtype_descriptor_t VAR_1, kctype_subtype_t VAR_2, uint32_t VAR_3, char * VAR_4)
{
 VAR_1->kcs_flags = VAR_0;
 VAR_1->kcs_elem_type = VAR_2;
 VAR_1->kcs_elem_offset = VAR_3;
 VAR_1->kcs_elem_size = FUNC_0(VAR_2);
 FUNC_1(VAR_1->kcs_name, VAR_4, sizeof(VAR_1->kcs_name));
 VAR_1->kcs_name[sizeof(VAR_1->kcs_name) - 1] = '\0';
}
