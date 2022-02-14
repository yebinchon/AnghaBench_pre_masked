
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_2__ {int (* p_vs_evt_hdlr ) (int ,void*) ;} ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,void*) ;

BOOLEAN FUNC_1(UINT16 VAR_2, void *VAR_3)
{
    if (VAR_1.p_vs_evt_hdlr) {
        return (*VAR_1.p_vs_evt_hdlr)(VAR_2, VAR_3);
    }

    return VAR_0;
}
