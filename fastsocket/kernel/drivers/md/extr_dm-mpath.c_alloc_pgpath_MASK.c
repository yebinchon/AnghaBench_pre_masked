
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgpath {int is_active; int activate_path; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct pgpath* FUNC_1 (int,int ) ;

__attribute__((used)) static struct pgpath *FUNC_2(void)
{
 struct pgpath *VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);

 if (VAR_2) {
  VAR_2->is_active = 1;
  FUNC_0(&VAR_2->activate_path, VAR_1);
 }

 return VAR_2;
}
