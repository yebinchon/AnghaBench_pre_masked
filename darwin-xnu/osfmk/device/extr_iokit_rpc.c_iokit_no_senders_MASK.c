
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ mach_port_mscount_t ;
struct TYPE_20__ {scalar_t__ msgh_remote_port; } ;
struct TYPE_21__ {scalar_t__ not_count; TYPE_1__ not_header; } ;
typedef TYPE_2__ mach_no_senders_notification_t ;
typedef TYPE_3__* ipc_port_t ;
typedef int ipc_kobject_type_t ;
typedef int * io_object_t ;
struct TYPE_22__ {scalar_t__ ip_kobject; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_3__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,scalar_t__,TYPE_3__*,TYPE_3__**) ;
 int FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_13( mach_no_senders_notification_t * VAR_6 )
{
    ipc_port_t VAR_7;
    io_object_t VAR_8 = ((void*)0);
    ipc_kobject_type_t VAR_9 = VAR_3;
    ipc_port_t VAR_10;

    VAR_7 = (ipc_port_t) VAR_6->not_header.msgh_remote_port;


    if( FUNC_0(VAR_7)) {
        FUNC_3(VAR_7);
        if( FUNC_6(VAR_7)) {
            VAR_8 = (io_object_t) VAR_7->ip_kobject;
     VAR_9 = FUNC_7( VAR_7 );
            if( (VAR_2 == VAR_9)
      || (VAR_0 == VAR_9)
      || (VAR_1 == VAR_9))
                FUNC_1( VAR_8, VAR_2 );
            else
                VAR_8 = ((void*)0);
 }
        FUNC_5(VAR_7);

        if( VAR_8 ) {

     mach_port_mscount_t VAR_11 = VAR_6->not_count;

            if( VAR_5 != FUNC_2( VAR_8, VAR_7, VAR_9, &VAR_11 ))
     {

  FUNC_8(VAR_7);
  if (FUNC_6(VAR_7)) {
   VAR_10 = FUNC_10(VAR_7);
   FUNC_11( VAR_7, VAR_11 + 1, VAR_10, &VAR_10);

   if ( VAR_10 != VAR_4)
    FUNC_12(VAR_10);
  } else {
   FUNC_9(VAR_7);
  }
     }
            FUNC_4( VAR_8 );
        }
    }
}
