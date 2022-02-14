
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 void* FUNC_0 (struct stlport*,int ) ;
 int FUNC_1 (struct stlport*,unsigned char,char) ;
 int FUNC_2 (struct stlport*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct stlport *VAR_7)
{
 unsigned char VAR_8, VAR_9;
 char VAR_10;





 VAR_9 = FUNC_0(VAR_7, VAR_1);
 FUNC_2(VAR_7, VAR_1, (VAR_9 & ~VAR_2));

 while ((VAR_8 = FUNC_0(VAR_7, VAR_5)) & VAR_6) {
  FUNC_2(VAR_7, VAR_4, VAR_0);
  VAR_10 = FUNC_0(VAR_7, VAR_3);
  FUNC_1(VAR_7, VAR_8, VAR_10);
 }





 FUNC_2(VAR_7, VAR_1, VAR_9);
}
