
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* device_context; } ;
struct TYPE_16__ {TYPE_2__* oformat; TYPE_1__* iformat; int priv_data; } ;
struct TYPE_15__ {int (* create_device_capabilities ) (TYPE_3__*,TYPE_4__*) ;} ;
struct TYPE_14__ {int (* create_device_capabilities ) (TYPE_3__*,TYPE_4__*) ;} ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVDictionary ;
typedef TYPE_4__ AVDeviceCapabilitiesQuery ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__**) ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;

int FUNC_8(AVDeviceCapabilitiesQuery **VAR_2, AVFormatContext *VAR_3,
                                 AVDictionary **VAR_4)
{
    int VAR_5;
    FUNC_1(VAR_3 && VAR_2);
    FUNC_1(VAR_3->iformat || VAR_3->oformat);
    if ((VAR_3->oformat && !VAR_3->oformat->create_device_capabilities) ||
        (VAR_3->iformat && !VAR_3->iformat->create_device_capabilities))
        return FUNC_0(VAR_1);
    *VAR_2 = FUNC_3(sizeof(**VAR_2));
    if (!(*VAR_2))
        return FUNC_0(VAR_0);
    (*VAR_2)->device_context = VAR_3;
    if (((VAR_5 = FUNC_5(VAR_3->priv_data, VAR_4)) < 0))
        goto fail;
    if (VAR_3->iformat) {
        if ((VAR_5 = VAR_3->iformat->create_device_capabilities(VAR_3, *VAR_2)) < 0)
            goto fail;
    } else {
        if ((VAR_5 = VAR_3->oformat->create_device_capabilities(VAR_3, *VAR_2)) < 0)
            goto fail;
    }
    FUNC_4(*VAR_2);
    return 0;
  fail:
    FUNC_2(VAR_2);
    return VAR_5;
}
