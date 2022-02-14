
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long* VAR_3 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_4(unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 pte_t VAR_8;

 VAR_7 = *(volatile unsigned long *)VAR_4;
 *(volatile unsigned long *)VAR_4 = VAR_7;

 VAR_8 = FUNC_0(FUNC_3(VAR_4), VAR_0);
 VAR_6 = FUNC_1(VAR_8);


 if(VAR_3[(VAR_5 & 0xff000) >> VAR_2] != VAR_6) {
  FUNC_2(VAR_5, VAR_6);
  VAR_3[(VAR_5 & 0xff000) >> VAR_2] = VAR_6;
 }

 return (VAR_5 + (VAR_4 & ~VAR_1));

}
