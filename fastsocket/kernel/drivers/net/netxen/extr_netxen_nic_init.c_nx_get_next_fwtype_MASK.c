
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {int fw_type; TYPE_1__ ahw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;





 int FUNC_2 (struct netxen_adapter*) ;

__attribute__((used)) static void
FUNC_3(struct netxen_adapter *VAR_1)
{
 u8 VAR_2;

 switch (VAR_1->fw_type) {
 case 128:
  VAR_2 = 129;
  break;

 case 129:
  if (FUNC_1(VAR_1->ahw.revision_id))
   VAR_2 = VAR_0;
  else if (FUNC_0(VAR_1->ahw.revision_id))
   VAR_2 = 132;
  else if (FUNC_2(VAR_1))
   VAR_2 = 130;
  else
   VAR_2 = 131;
  break;

 case 130:
  VAR_2 = 131;
  break;

 case 132:
 case 131:
 default:
  VAR_2 = VAR_0;
  break;
 }

 VAR_1->fw_type = VAR_2;
}
