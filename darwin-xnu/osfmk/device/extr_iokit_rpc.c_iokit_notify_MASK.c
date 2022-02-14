
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mach_no_senders_notification_t ;
struct TYPE_3__ {int msgh_id; } ;
typedef TYPE_1__ mach_msg_header_t ;
typedef int boolean_t ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;

boolean_t
FUNC_2( mach_msg_header_t * VAR_2 )
{
    switch (VAR_2->msgh_id) {
        case 131:
            FUNC_0((mach_no_senders_notification_t *) VAR_2);
            return VAR_1;

        case 130:
        case 129:
        case 128:
        case 132:
        default:
            FUNC_1("iokit_notify: strange notification %d\n", VAR_2->msgh_id);
            return VAR_0;
    }
}
