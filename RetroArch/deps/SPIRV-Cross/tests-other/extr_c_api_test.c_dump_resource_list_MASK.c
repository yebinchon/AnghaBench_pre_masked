
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spvc_resources ;
typedef int spvc_resource_type ;
struct TYPE_3__ {int id; int base_type_id; int type_id; char* name; } ;
typedef TYPE_1__ spvc_reflected_resource ;
typedef int spvc_compiler ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ,TYPE_1__ const**,size_t*) ;

__attribute__((used)) static void FUNC_4(spvc_compiler VAR_2, spvc_resources VAR_3, spvc_resource_type VAR_4, const char *VAR_5)
{
 const spvc_reflected_resource *VAR_6 = ((void*)0);
 size_t VAR_7 = 0;
 size_t VAR_8;
 FUNC_0(FUNC_3(VAR_3, VAR_4, &VAR_6, &VAR_7));
 FUNC_1("%s\n", VAR_5);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  FUNC_1("ID: %u, BaseTypeID: %u, TypeID: %u, Name: %s\n", VAR_6[VAR_8].id, VAR_6[VAR_8].base_type_id, VAR_6[VAR_8].type_id,
         VAR_6[VAR_8].name);
  FUNC_1("  Set: %u, Binding: %u\n",
         FUNC_2(VAR_2, VAR_6[VAR_8].id, VAR_1),
         FUNC_2(VAR_2, VAR_6[VAR_8].id, VAR_0));
 }
}
