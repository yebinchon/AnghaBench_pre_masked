
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Host {int Type; int Mode; int Ivec; int Control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;

 int VAR_5 ;

 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct Host *VAR_6)
{
 switch (VAR_6->Type) {
 case 129:
  FUNC_0(VAR_5, "Start ISA card running\n");
  FUNC_1(VAR_0 | VAR_1 | VAR_6->Mode | VAR_4[VAR_6->Ivec & 0xF], &VAR_6->Control);
  break;
 case 128:





  FUNC_0(VAR_5, "Start PCI card running\n");
  FUNC_1(VAR_2 | VAR_3 | VAR_6->Mode, &VAR_6->Control);
  break;
 default:
  FUNC_0(VAR_5, "Unknown host type %d\n", VAR_6->Type);
  break;
 }
 return;
}
