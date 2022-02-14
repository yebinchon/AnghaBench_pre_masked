
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (char const*,int,struct dentry*,char*,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;

struct dentry *FUNC_3(const char *VAR_3, struct dentry *VAR_4,
          const char *VAR_5)
{
 struct dentry *VAR_6;
 char *VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_3, VAR_1 | VAR_2, VAR_4, VAR_7,
         ((void*)0));
 if (!VAR_6)
  FUNC_1(VAR_7);
 return VAR_6;
}
