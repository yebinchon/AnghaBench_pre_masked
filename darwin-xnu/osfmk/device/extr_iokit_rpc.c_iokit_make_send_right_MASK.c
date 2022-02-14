
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_object_t ;
typedef int ipc_kobject_type_t ;
typedef int * io_object_t ;
struct TYPE_3__ {int itk_space; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

mach_port_name_t
FUNC_6( task_t VAR_7, io_object_t VAR_8, ipc_kobject_type_t VAR_9 )
{
    ipc_port_t VAR_10;
    ipc_port_t VAR_11;
    mach_port_name_t VAR_12 = 0;

    if( VAR_8 == ((void*)0))
        return VAR_5;

    VAR_10 = FUNC_1( VAR_8, VAR_9 );
    if( VAR_10) {
 VAR_11 = FUNC_4( VAR_10);
 FUNC_2( VAR_10 );
    } else
 VAR_11 = VAR_1;

    if (FUNC_0( VAR_11 )) {
     kern_return_t VAR_13;
     VAR_13 = FUNC_3( VAR_7->itk_space, (ipc_object_t) VAR_11,
    VAR_3, VAR_6, &VAR_12);
 if ( VAR_13 != VAR_2) {
     FUNC_5( VAR_11 );
     VAR_12 = VAR_5;
 }
    } else if ( VAR_11 == VAR_1)
        VAR_12 = VAR_5;
    else if ( VAR_11 == VAR_0)
     VAR_12 = VAR_4;

    return( VAR_12 );
}
