
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in_ifaddr {int ifa_address; } ;
struct in_device {scalar_t__ ifa_list; } ;
struct TYPE_5__ {int abyIPAddr; TYPE_1__* dev; } ;
struct TYPE_4__ {scalar_t__ ip_ptr; } ;
typedef TYPE_2__* PSDevice ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) inline static BOOL FUNC_1(PSDevice VAR_2) {
    struct in_device* VAR_3=(struct in_device*) VAR_2->dev->ip_ptr;
    struct in_ifaddr* VAR_4;

    if (VAR_3!=((void*)0)) {
        VAR_4=(struct in_ifaddr*) VAR_3->ifa_list;
        if (VAR_4!=((void*)0)) {
            FUNC_0(VAR_2->abyIPAddr,&VAR_4->ifa_address,4);
            return VAR_1;
        }
    }
    return VAR_0;
}
