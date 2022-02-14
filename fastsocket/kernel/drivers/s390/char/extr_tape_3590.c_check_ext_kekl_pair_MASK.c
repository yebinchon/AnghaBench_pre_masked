
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape390_kekl_pair {int * kekl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct tape390_kekl_pair *VAR_1)
{
 if (FUNC_0(&VAR_1->kekl[0]))
  goto invalid;
 if (FUNC_0(&VAR_1->kekl[1]))
  goto invalid;

 return 0;
invalid:
 return -VAR_0;
}
