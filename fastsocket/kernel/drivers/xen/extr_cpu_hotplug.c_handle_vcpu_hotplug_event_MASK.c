
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_watch {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,unsigned int*) ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct xenbus_watch *VAR_1,
     const char **VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 char *VAR_5;
 const char *VAR_6 = VAR_2[VAR_0];

 VAR_5 = FUNC_1(VAR_6, "cpu/");
 if (VAR_5 != ((void*)0)) {
  FUNC_0(VAR_5, "cpu/%u", &VAR_4);
  FUNC_2(VAR_4);
 }
}
