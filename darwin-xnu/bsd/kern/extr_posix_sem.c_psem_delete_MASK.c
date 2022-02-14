
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseminfo {int psem_semobject; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (struct pseminfo*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct pseminfo * VAR_3)
{
 kern_return_t VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3->psem_semobject);




 switch (VAR_4) {
 case 131:
 case 129:
  return (VAR_1);
 case 132:
 case 130:
  return (VAR_0);
 case 128:
  return(0);
 default:
  return (VAR_1);
 }
}
