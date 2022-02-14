
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p; int i; int v; } ;
typedef TYPE_1__ vgareg ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(vgareg VAR_0)
{
  int VAR_1,VAR_2,VAR_3;

  VAR_1=0x300|VAR_0.p;
  VAR_2=VAR_0.i;
  VAR_3=VAR_0.v;

  switch(VAR_1)
  {
    case 0x3C0: FUNC_0(0x3DA);
                FUNC_1(0x3C0,VAR_2);
                FUNC_1(0x3C0,VAR_3);
                break;
    case 0x3C2:
    case 0x3C3:
    default: FUNC_1(VAR_1, VAR_3);
                break;
    case 0x3C4: if(VAR_2==1)
                {
                 FUNC_2(0x3c4,0x100);
                 FUNC_2(0x3c4,(VAR_3<<8)|1);
                 FUNC_2(0x3c4,0x300);
                 break;
                }
    case 0x3CE:
    case 0x3D4: FUNC_2(VAR_1,VAR_2|(VAR_3<<8));
                break;
  }
}
