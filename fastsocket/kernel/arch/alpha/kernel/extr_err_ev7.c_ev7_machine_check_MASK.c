
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct el_subpacket {int dummy; } ;


 char* VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct el_subpacket*) ;
 char* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,char*,unsigned int,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;

void
FUNC_6(unsigned long VAR_3, unsigned long VAR_4)
{
 struct el_subpacket *VAR_5 = (struct el_subpacket *)VAR_4;
 char *VAR_6 = VAR_2;




 FUNC_2();
 FUNC_0();

 VAR_2 = VAR_0;
 FUNC_3("%s*CPU %s Error (Vector 0x%x) reported on CPU %d\n",
        VAR_2,
        (VAR_3 == VAR_1) ? "Correctable" : "Uncorrectable",
        (unsigned int)VAR_3, (int)FUNC_4());
 FUNC_1(VAR_5);
 VAR_2 = VAR_6;




 FUNC_5(0x7);
 FUNC_2();
}
