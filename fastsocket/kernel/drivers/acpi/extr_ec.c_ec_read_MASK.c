
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int VAR_1 ;

int FUNC_1(u8 VAR_2, u8 * VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 if (!VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_5);

 if (!VAR_4) {
  *VAR_3 = VAR_5;
  return 0;
 } else
  return VAR_4;
}
