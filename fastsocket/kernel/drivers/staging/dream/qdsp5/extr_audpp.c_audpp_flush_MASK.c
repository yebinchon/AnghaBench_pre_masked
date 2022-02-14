
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int flush_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ,int) ;

int FUNC_2(unsigned VAR_6)
{
 u16 VAR_7[VAR_1 / sizeof(unsigned short)];

 if (VAR_6 >= VAR_4)
  return -VAR_5;

 FUNC_1(VAR_7, 0, sizeof(VAR_7));

 VAR_7[0] = VAR_0;
 VAR_7[1 + VAR_6] = VAR_3 | VAR_2;

 return FUNC_0(VAR_7, sizeof(VAR_7));
}
