
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cardtype; int port; } ;
typedef TYPE_1__ IXJ ;


 int VAR_0 ;





 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(IXJ *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;


 switch (VAR_1->cardtype) {
 case 130:
  VAR_4 = 0x380;
  break;
 case 132:
  if(VAR_1->port == VAR_0) {
   VAR_4 = 0x48;
  } else {
   VAR_4 = 0x100;
  }
  break;
 case 129:
  VAR_4 = 0x380;
  break;
 case 128:
  VAR_4 = 0x6C;
  break;
 case 131:
  VAR_4 = 100;
  break;
 default:
  return -1;
 }
 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = (VAR_2 * 100) / VAR_4;
 if(VAR_3 > 100)
  VAR_3 = 100;
 return VAR_3;
}
