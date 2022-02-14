
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int pause_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ,int) ;

int FUNC_2(unsigned VAR_7, int VAR_8)
{

 u16 VAR_9[VAR_1 / sizeof(unsigned short)];

 if (VAR_7 >= VAR_5)
  return -VAR_6;

 FUNC_1(VAR_9, 0, sizeof(VAR_9));

 VAR_9[0] = VAR_0;
 if (VAR_8 == 1)
  VAR_9[1 + VAR_7] = VAR_4 | VAR_2;
 else if (VAR_8 == 0)
  VAR_9[1 + VAR_7] = VAR_4 | VAR_3;
 else
  return -VAR_6;

 return FUNC_0(VAR_9, sizeof(VAR_9));
}
