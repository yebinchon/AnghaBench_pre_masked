
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dr_release_t ;
typedef int dr_match_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (struct device*,int ,int ,void*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct device *VAR_1, dr_release_t VAR_2,
     dr_match_t VAR_3, void *VAR_4)
{
 void *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_2(!VAR_5))
  return -VAR_0;

 FUNC_0(VAR_5);
 return 0;
}
