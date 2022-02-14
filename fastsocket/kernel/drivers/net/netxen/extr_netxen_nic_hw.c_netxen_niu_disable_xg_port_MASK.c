
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {int physical_port; TYPE_1__ ahw; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct netxen_adapter*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct netxen_adapter *VAR_4)
{
 __u32 VAR_5;
 u32 VAR_6 = VAR_4->physical_port;

 if (FUNC_1(VAR_4->ahw.revision_id))
  return 0;

 if (VAR_6 >= VAR_2)
  return -VAR_0;

 VAR_5 = 0;
 if (FUNC_0(VAR_4,
   VAR_3 + (0x10000 * VAR_6), VAR_5))
  return -VAR_1;
 return 0;
}
