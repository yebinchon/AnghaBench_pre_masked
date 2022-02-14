
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ap; int dev; } ;
typedef TYPE_1__ local_info_t ;
struct TYPE_8__ {int policy; } ;
struct TYPE_7__ {TYPE_5__ mac_restrictions; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(local_info_t *VAR_4, int *VAR_5)
{
 int VAR_6 = 0;

 switch (*VAR_5) {
 case 128:
  VAR_4->ap->mac_restrictions.policy = VAR_3;
  break;
 case 130:
  VAR_4->ap->mac_restrictions.policy = VAR_1;
  break;
 case 129:
  VAR_4->ap->mac_restrictions.policy = VAR_2;
  break;
 case 132:
  FUNC_0(&VAR_4->ap->mac_restrictions);
  break;
 case 131:
  FUNC_1(VAR_4->ap);
  FUNC_2(VAR_4->dev, VAR_4->ap, 0);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
