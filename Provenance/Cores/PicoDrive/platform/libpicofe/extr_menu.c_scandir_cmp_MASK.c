
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dirent const**,struct dirent const**) ;

__attribute__((used)) static int FUNC_1(const void *VAR_1, const void *VAR_2)
{
 const struct dirent **VAR_3 = (const struct dirent **)VAR_1;
 const struct dirent **VAR_4 = (const struct dirent **)VAR_2;
 if ((*VAR_3)->d_type == (*VAR_4)->d_type)
  return FUNC_0(VAR_3, VAR_4);
 if ((*VAR_3)->d_type == VAR_0)
  return -1;
 if ((*VAR_4)->d_type == VAR_0)
  return 1;

 return FUNC_0(VAR_3, VAR_4);
}
