
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {TYPE_1__ ahw; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (struct netxen_adapter*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct netxen_adapter*,int ,int*) ;

__attribute__((used)) static int
FUNC_5(struct netxen_adapter *VAR_3)
{
 u32 VAR_4, VAR_5;
 VAR_4 = 0;


 if (FUNC_3(VAR_3->ahw.revision_id))
  return 1;

 FUNC_4(VAR_3,
   VAR_0, (int *)&VAR_5);
 VAR_5 = FUNC_0(VAR_5);

 if (VAR_5 >= FUNC_1(4, 0, 220)) {

  VAR_4 = FUNC_2(VAR_3, VAR_1);
  if (VAR_4 & VAR_2)
   return 1;
 }
 return 0;
}
