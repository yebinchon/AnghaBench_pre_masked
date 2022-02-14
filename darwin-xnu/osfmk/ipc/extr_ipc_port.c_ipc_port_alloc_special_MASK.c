
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_9__ {int io_bits; } ;
struct TYPE_8__ {int ip_references; TYPE_5__ ip_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (uintptr_t*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (TYPE_1__*,uintptr_t*,int) ;

ipc_port_t
FUNC_8(
 ipc_space_t VAR_4)
{
 ipc_port_t VAR_5;

 FUNC_0(VAR_5 = (ipc_port_t) FUNC_2(VAR_0));
 if (VAR_5 == VAR_2)
  return VAR_2;






 FUNC_1((char *)VAR_5, sizeof(*VAR_5));
 FUNC_3(&VAR_5->ip_object);
 VAR_5->ip_references = 1;
 VAR_5->ip_object.io_bits = FUNC_4(VAR_3, VAR_0, 0);

 FUNC_6(VAR_5, VAR_4, 1);





 return VAR_5;
}
