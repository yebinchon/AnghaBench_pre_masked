
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IniContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int *,int) ;
 char* FUNC_2 (int *,char*,int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4, IniContext *VAR_5)

{
 char *VAR_6;

 VAR_3 = FUNC_1(((void*)0), "use_storage_id", VAR_5, 0);

 if (!VAR_3)
 {
  return 0;
 }

 VAR_6 = FUNC_2(((void*)0), "id_type_in_filename", VAR_5);

 if (VAR_6 != ((void*)0) && FUNC_3(VAR_6, "id") == 0)
 {
  VAR_2 = VAR_1;
 }
 else
 {
  VAR_2 = VAR_0;
 }

 return FUNC_0(VAR_4, VAR_5);
}
