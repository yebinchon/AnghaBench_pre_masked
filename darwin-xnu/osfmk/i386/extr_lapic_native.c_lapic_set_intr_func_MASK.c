
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i386_intr_func_t ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,int,int ) ;

void
FUNC_1(int VAR_2, i386_intr_func_t VAR_3)
{
 if (VAR_2 > VAR_0)
  VAR_2 -= VAR_0;

 switch (VAR_2) {
 case 132:
 case 133:
 case 128:
 case 129:
 case 131:
 case 134:
 case 130:
  VAR_1[VAR_2] = VAR_3;
  break;
 default:
  FUNC_0("lapic_set_intr_func(%d,%p) invalid vector\n",
   VAR_2, VAR_3);
 }
}
