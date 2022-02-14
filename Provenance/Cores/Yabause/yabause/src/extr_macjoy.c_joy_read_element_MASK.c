
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__** iface; } ;
typedef TYPE_1__ joydata_t ;
struct TYPE_10__ {int cookie; } ;
typedef TYPE_2__ joy_elemdata_t ;
struct TYPE_12__ {int (* getElementValue ) (TYPE_4__**,int ,TYPE_3__*) ;} ;
struct TYPE_11__ {int value; } ;
typedef TYPE_3__ IOHIDEventStruct ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_4__**,int ,TYPE_3__*) ;

int FUNC_2(joydata_t *VAR_0, joy_elemdata_t *VAR_1) {
    IOHIDEventStruct VAR_2;

    FUNC_0(&VAR_2, 0, sizeof(IOHIDEventStruct));

    (*VAR_0->iface)->getElementValue(VAR_0->iface, VAR_1->cookie, &VAR_2);

    return VAR_2.value;
}
