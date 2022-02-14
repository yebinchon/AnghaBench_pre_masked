
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; int ip_addr; } ;
typedef TYPE_1__ ConnectionInfo ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(((ConnectionInfo *)VAR_0)->ip_addr,
   ((ConnectionInfo *)VAR_1)->ip_addr);
 if (VAR_2 != 0)
 {
  return VAR_2;
 }

 return ((ConnectionInfo *)VAR_0)->port -
   ((ConnectionInfo *)VAR_1)->port;
}
