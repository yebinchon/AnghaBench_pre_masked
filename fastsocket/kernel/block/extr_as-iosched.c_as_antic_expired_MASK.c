
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as_data {long antic_start; long antic_expire; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct as_data *VAR_1)
{
 long VAR_2;

 VAR_2 = VAR_0 - VAR_1->antic_start;
 if (FUNC_0(VAR_2 < 0))
  VAR_2 = -VAR_2;
 if (VAR_2 < VAR_1->antic_expire)
  return 0;

 return 1;
}
