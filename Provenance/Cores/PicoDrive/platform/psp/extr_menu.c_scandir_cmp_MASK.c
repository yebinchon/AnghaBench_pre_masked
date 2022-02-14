
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_dirent {int d_type; int d_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_1, const void *VAR_2)
{
 struct my_dirent **VAR_3 = (struct my_dirent **)VAR_1, **VAR_4 = (struct my_dirent **)VAR_2;
 if ((*VAR_3)->d_type & (*VAR_4)->d_type & VAR_0)
  return FUNC_0((*VAR_3)->d_name, (*VAR_4)->d_name);
 if ((*VAR_3)->d_type & VAR_0) return -1;
 if ((*VAR_4)->d_type & VAR_0) return 1;
 return FUNC_0((*VAR_3)->d_name, (*VAR_4)->d_name);
}
