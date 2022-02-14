
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cardtype; } ;
typedef TYPE_1__ IXJ ;







 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(IXJ *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;

 switch (VAR_0->cardtype) {
 case 130:
  VAR_3 = 0x440;
  break;
 case 132:
  VAR_3 = 0x180;
  break;
 case 129:
  VAR_3 = 0x4C0;
  break;
 case 128:
  VAR_3 = 0x100;
  break;
 case 131:
  VAR_3 = 0x400;
  break;
 default:
  return -1;
 }
 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = (VAR_1 * 100) / VAR_3;
 if(VAR_2 > 100)
  VAR_2 = 100;
 return VAR_2;
}
