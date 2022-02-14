
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencomm_handle {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,struct xencomm_handle*,unsigned int) ;
 int FUNC_2 (int *,unsigned int,void*,unsigned int,struct xencomm_handle**) ;

int
FUNC_3(unsigned int VAR_1, void *VAR_2,
     unsigned int VAR_3)
{
 int VAR_4;
 struct xencomm_handle *VAR_5;
 FUNC_0(VAR_0, 2);

 VAR_4 = FUNC_2(&VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_1, VAR_5, VAR_3);
}
