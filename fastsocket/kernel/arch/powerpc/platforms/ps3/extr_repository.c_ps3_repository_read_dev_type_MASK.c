
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef enum ps3_dev_type { ____Placeholder_ps3_dev_type } ps3_dev_type ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int*,int *) ;

int FUNC_3(unsigned int VAR_1,
 unsigned int VAR_2, enum ps3_dev_type *VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_2(VAR_0,
  FUNC_1("bus", VAR_1),
  FUNC_0("dev", VAR_2),
  FUNC_0("type", 0),
  0,
  &VAR_5, ((void*)0));
 *VAR_3 = VAR_5;
 return VAR_4;
}
