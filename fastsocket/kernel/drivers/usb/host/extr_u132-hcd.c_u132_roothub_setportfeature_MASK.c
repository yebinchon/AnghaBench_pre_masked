
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct u132_port {int Status; } ;
struct u132 {int num_ports; struct u132_port* port; } ;
struct TYPE_2__ {int * portstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 TYPE_1__ VAR_4 ;
 int FUNC_0 (struct u132*,int) ;
 int FUNC_1 (struct u132*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct u132 *VAR_5, u16 VAR_6,
 u16 VAR_7)
{
 if (VAR_7 == 0 || VAR_7 > VAR_5->num_ports) {
  return -VAR_0;
 } else {
  int VAR_8;
  int VAR_9 = VAR_7 - 1;
  struct u132_port *VAR_10 = &VAR_5->port[VAR_9];
  VAR_10->Status &= ~(1 << VAR_6);
  switch (VAR_6) {
  case 128:
   VAR_8 = FUNC_1(VAR_5,
    VAR_4.portstatus[VAR_9], VAR_3);
   if (VAR_8)
    return VAR_8;
   return 0;
  case 130:
   VAR_8 = FUNC_1(VAR_5,
    VAR_4.portstatus[VAR_9], VAR_2);
   if (VAR_8)
    return VAR_8;
   return 0;
  case 129:
   VAR_8 = FUNC_0(VAR_5, VAR_9);
   if (VAR_8)
    return VAR_8;
   return 0;
  default:
   return -VAR_1;
  }
 }
}
