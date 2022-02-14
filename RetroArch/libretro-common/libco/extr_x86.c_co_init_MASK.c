
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (void*,unsigned long,int) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
   unsigned long VAR_5 = (unsigned long)VAR_4;
   unsigned long VAR_6 = VAR_5 - (VAR_5 % FUNC_1(VAR_3));
   unsigned long VAR_7 = (VAR_5 - VAR_6) + sizeof VAR_4;
   FUNC_0((void*)VAR_6, VAR_7, VAR_1 | VAR_2 | VAR_0);
}
