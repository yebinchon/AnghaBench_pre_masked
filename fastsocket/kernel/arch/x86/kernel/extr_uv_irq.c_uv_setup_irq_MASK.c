
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int,unsigned long,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,unsigned long,int) ;

int FUNC_5(char *VAR_2, int VAR_3, int VAR_4,
   unsigned long VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_1, FUNC_3(VAR_4));

 if (VAR_7 <= 0)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_3, VAR_4, VAR_5,
  VAR_6);
 if (VAR_8 == VAR_7)
  FUNC_4(VAR_7, VAR_5, VAR_4);
 else
  FUNC_2(VAR_7);

 return VAR_8;
}
