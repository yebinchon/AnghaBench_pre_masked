
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_exception_store_type {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_0 ;
 struct dm_exception_store_type* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static struct dm_exception_store_type *FUNC_7(const char *VAR_1)
{
 char *VAR_2, *VAR_3;
 struct dm_exception_store_type *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_4(VAR_1, VAR_0);
 if (!VAR_3) {
  FUNC_0("No memory left to attempt load for \"%s\"", VAR_1);
  return ((void*)0);
 }

 while (FUNC_5("dm-exstore-%s", VAR_3) ||
        !(VAR_4 = FUNC_2(VAR_1))) {
  VAR_2 = FUNC_6(VAR_3, '-');
  if (!VAR_2)
   break;
  VAR_2[0] = '\0';
 }

 if (!VAR_4)
  FUNC_1("Module for exstore type \"%s\" not found.", VAR_1);

 FUNC_3(VAR_3);

 return VAR_4;
}
