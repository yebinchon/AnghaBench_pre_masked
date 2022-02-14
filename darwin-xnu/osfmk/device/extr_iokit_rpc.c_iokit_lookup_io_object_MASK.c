
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ ipc_kobject_type_t ;
typedef int * io_object_t ;
struct TYPE_8__ {scalar_t__ ip_kobject; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static io_object_t
FUNC_6(ipc_port_t VAR_0, ipc_kobject_type_t VAR_1)
{
 io_object_t VAR_2;

 if (!FUNC_0(VAR_0))
     return (((void*)0));

 FUNC_2(VAR_0);
 if (FUNC_4(VAR_0) && (FUNC_5(VAR_0) == VAR_1)) {
     VAR_2 = (io_object_t) VAR_0->ip_kobject;
     FUNC_1( VAR_2, VAR_1 );
 }
 else
     VAR_2 = ((void*)0);

 FUNC_3(VAR_0);

 return( VAR_2 );
}
