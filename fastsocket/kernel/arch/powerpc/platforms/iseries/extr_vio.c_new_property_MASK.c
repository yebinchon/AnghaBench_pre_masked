
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {char* name; char* value; int length; } ;


 int VAR_0 ;
 struct property* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,void const*,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static struct property *FUNC_4(const char *VAR_1, int VAR_2,
  const void *VAR_3)
{
 struct property *VAR_4 = FUNC_0(sizeof(*VAR_4) + FUNC_3(VAR_1) + 1 + VAR_2,
   VAR_0);

 if (!VAR_4)
  return ((void*)0);
 VAR_4->name = (char *)(VAR_4 + 1);
 VAR_4->value = VAR_4->name + FUNC_3(VAR_1) + 1;
 FUNC_2(VAR_4->name, VAR_1);
 FUNC_1(VAR_4->value, VAR_3, VAR_2);
 VAR_4->length = VAR_2;
 return VAR_4;
}
