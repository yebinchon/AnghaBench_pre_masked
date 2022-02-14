
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int length; void* value; int name; } ;
struct cc_workarea {int name_offset; int prop_length; int prop_offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct property*) ;
 int FUNC_1 (char*,int ) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,char*,int) ;

__attribute__((used)) static struct property *FUNC_4(struct cc_workarea *VAR_1)
{
 struct property *VAR_2;
 char *VAR_3;
 char *VAR_4;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = (char *)VAR_1 + VAR_1->name_offset;
 VAR_2->name = FUNC_1(VAR_3, VAR_0);
 if (!VAR_2->name) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 VAR_2->length = VAR_1->prop_length;
 VAR_4 = (char *)VAR_1 + VAR_1->prop_offset;
 VAR_2->value = FUNC_2(VAR_2->length, VAR_0);
 if (!VAR_2->value) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 FUNC_3(VAR_2->value, VAR_4, VAR_2->length);
 return VAR_2;
}
