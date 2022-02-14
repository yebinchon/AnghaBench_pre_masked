
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;

unsigned long
FUNC_3(void)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_11 = FUNC_0(VAR_4);
 VAR_10 = FUNC_0(VAR_2);
 VAR_9 = FUNC_0(VAR_1);
 VAR_8 = FUNC_0(VAR_0);
 VAR_7 = FUNC_0(VAR_3);
 VAR_6 = FUNC_0(VAR_5);

 VAR_11 = FUNC_1(VAR_11);
 VAR_10 = FUNC_1(VAR_10);
 VAR_9 = FUNC_1(VAR_9);
 VAR_8 = FUNC_1(VAR_8);
 VAR_7 = FUNC_1(VAR_7);
 VAR_6 = FUNC_1(VAR_6);

 if ((VAR_6 += 1900) < 1970)
  VAR_6 += 100;

 return FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}
