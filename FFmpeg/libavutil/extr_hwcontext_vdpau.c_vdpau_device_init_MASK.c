
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VdpStatus ;
struct TYPE_8__ {int surf_destroy; int surf_create; int put_data; int get_data; int get_transfer_caps; } ;
typedef TYPE_2__ VDPAUDeviceContext ;
struct TYPE_9__ {TYPE_1__* internal; int * hwctx; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef int AVVDPAUDeviceContext ;
typedef TYPE_3__ AVHWDeviceContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(AVHWDeviceContext *VAR_6)
{
    AVVDPAUDeviceContext *VAR_7 = VAR_6->hwctx;
    VDPAUDeviceContext *VAR_8 = VAR_6->internal->priv;
    VdpStatus VAR_9;
    int VAR_10;

    FUNC_0(VAR_5,
                 VAR_8->get_transfer_caps);
    FUNC_0(VAR_3, VAR_8->get_data);
    FUNC_0(VAR_4, VAR_8->put_data);
    FUNC_0(VAR_1, VAR_8->surf_create);
    FUNC_0(VAR_2, VAR_8->surf_destroy);

    VAR_10 = FUNC_2(VAR_6);
    if (VAR_10 < 0) {
        FUNC_1(VAR_6, VAR_0, "Error querying the supported pixel formats\n");
        return VAR_10;
    }

    return 0;
}
