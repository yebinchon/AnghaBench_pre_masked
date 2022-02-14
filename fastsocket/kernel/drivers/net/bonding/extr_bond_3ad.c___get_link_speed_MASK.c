
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct slave {scalar_t__ link; int speed; } ;
struct port {int actor_port_number; struct slave* slave; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_0 (char*,int ,scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct port *VAR_5)
{
 struct slave *VAR_6 = VAR_5->slave;
 u16 VAR_7;





 if (VAR_6->link != VAR_4) {
  VAR_7=0;
 } else {
  switch (VAR_6->speed) {
  case 131:
   VAR_7 = VAR_3;
   break;

  case 130:
   VAR_7 = VAR_2;
   break;

  case 129:
   VAR_7 = VAR_1;
   break;

  case 128:
   VAR_7 = VAR_0;
   break;

  default:
   VAR_7 = 0;
   break;
  }
 }

 FUNC_0("Port %d Received link speed %d update from adapter\n", VAR_5->actor_port_number, VAR_7);
 return VAR_7;
}
