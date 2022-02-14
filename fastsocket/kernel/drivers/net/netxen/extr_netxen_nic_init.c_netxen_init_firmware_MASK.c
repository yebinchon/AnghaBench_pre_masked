
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {TYPE_1__ ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct netxen_adapter*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (struct netxen_adapter*) ;

int FUNC_3(struct netxen_adapter *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_0(VAR_8, VAR_2, VAR_4);
 FUNC_0(VAR_8, VAR_1, VAR_5);
 FUNC_0(VAR_8, VAR_0, VAR_7);

 if (FUNC_1(VAR_8->ahw.revision_id))
  FUNC_0(VAR_8, VAR_3, VAR_6);

 return VAR_9;
}
