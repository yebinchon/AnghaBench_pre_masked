
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (unsigned long,int) ;
 unsigned long FUNC_2 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_3 (unsigned long,int,int) ;
 unsigned long FUNC_4 (unsigned long,unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1,
          unsigned long VAR_2,
          int VAR_3, int VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_2, VAR_4);
 VAR_8 = FUNC_2(VAR_2, VAR_7, VAR_4);

 VAR_6 = FUNC_3(VAR_8, VAR_3, VAR_4);
 FUNC_0(VAR_6 == -1);

 VAR_9 = VAR_1 & 7;
 VAR_5 = FUNC_4(VAR_9, VAR_6, 0);

 FUNC_0(VAR_5 != VAR_0);
}
