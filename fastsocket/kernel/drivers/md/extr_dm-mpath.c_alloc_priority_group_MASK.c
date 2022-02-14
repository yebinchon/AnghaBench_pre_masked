
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priority_group {int pgpaths; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct priority_group* FUNC_1 (int,int ) ;

__attribute__((used)) static struct priority_group *FUNC_2(void)
{
 struct priority_group *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);

 if (VAR_1)
  FUNC_0(&VAR_1->pgpaths);

 return VAR_1;
}
