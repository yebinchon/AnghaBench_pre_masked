
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int in_dev_t ;


 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static in_dev_t *FUNC_0(int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return ((void*)0);

 return &VAR_1[VAR_2];
}
