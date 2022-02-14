
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ,int) ;

int FUNC_2(unsigned VAR_4, unsigned VAR_5, int VAR_6)
{

 uint16_t VAR_7[11];

 if (VAR_4 > 6)
  return -VAR_3;

 FUNC_1(VAR_7, 0, sizeof(VAR_7));
 VAR_7[0] = VAR_0;
 VAR_7[1 + VAR_4] = VAR_1;
 VAR_7[8] = VAR_2;
 VAR_7[9] = VAR_5;
 VAR_7[10] = VAR_6;

 return FUNC_0(VAR_7, sizeof(VAR_7));
}
