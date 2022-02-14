
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cachefiles_cache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 unsigned long VAR_1 ;
 int FUNC_2 (char*) ;
 unsigned long FUNC_3 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_4(struct cachefiles_cache *VAR_2, char *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(",%s", VAR_3);

 VAR_4 = FUNC_3(VAR_3, &VAR_3, 0);
 if (VAR_3[0] != '\0')
  goto inval;

 VAR_1 = VAR_4;
 FUNC_1(" = 0");
 return 0;

inval:
 FUNC_2("debug command requires mask");
 return -VAR_0;
}
