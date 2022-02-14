
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int args ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 unsigned long FUNC_1 () ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int ,unsigned long*,int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_5)
{
 unsigned long VAR_6[] = { VAR_0,
     (unsigned long)VAR_2,
     VAR_3 / FUNC_1(), VAR_5 };
 FUNC_3("Guest: %p - %p (%#lx)\n",
  VAR_2, VAR_2 + VAR_3, VAR_3);
 VAR_4 = FUNC_2("/dev/lguest", VAR_1);
 if (FUNC_4(VAR_4, VAR_6, sizeof(VAR_6)) < 0)
  FUNC_0(1, "Writing to /dev/lguest");
}
