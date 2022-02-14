
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mach_node_t ;
typedef int mach_msg_size_t ;
typedef scalar_t__ mach_msg_return_t ;
typedef int mach_msg_header_t ;
typedef TYPE_1__* ipc_kmsg_t ;
struct TYPE_7__ {int ikm_node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_1__**) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static mach_msg_return_t
FUNC_5(mach_msg_header_t *VAR_3,
                                 mach_msg_size_t VAR_4,
                                 mach_node_t VAR_5)
{
    ipc_kmsg_t VAR_6;
    mach_msg_return_t VAR_7;

    VAR_7 = FUNC_3(VAR_3, VAR_4, &VAR_6);
    if (VAR_7 != VAR_0)
        return VAR_7;

    VAR_7 = FUNC_0(VAR_6);
    if (VAR_7 != VAR_0) {
        FUNC_2(VAR_6);
        return VAR_7;
    }

    VAR_6->ikm_node = VAR_5;
    VAR_7 = FUNC_4(VAR_6,
                       VAR_2,
                       VAR_1);
    if (VAR_7 != VAR_0) {
        FUNC_1(VAR_6);
    }

    return VAR_7;
}
