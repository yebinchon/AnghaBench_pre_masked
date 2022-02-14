
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef enum ps3_reg_type { ____Placeholder_ps3_reg_type } ps3_reg_type ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int*,int *) ;

int FUNC_3(unsigned int VAR_1,
 unsigned int VAR_2, unsigned int VAR_3,
 enum ps3_reg_type *VAR_4)
{
 int VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_2(VAR_0,
  FUNC_1("bus", VAR_1),
  FUNC_0("dev", VAR_2),
  FUNC_0("reg", VAR_3),
  FUNC_0("type", 0),
  &VAR_6, ((void*)0));
 *VAR_4 = VAR_6;
 return VAR_5;
}
