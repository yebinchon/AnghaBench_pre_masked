
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct nameidata {struct path path; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,unsigned int,struct nameidata*) ;

int FUNC_1(const char *VAR_1, unsigned int VAR_2, struct path *VAR_3)
{
 struct nameidata VAR_4;
 int VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4);
 if (!VAR_5)
  *VAR_3 = VAR_4.path;
 return VAR_5;
}
