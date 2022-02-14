
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rstate; } ;
struct TYPE_6__ {TYPE_1__ rlayer; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (TYPE_2__*) ;




const char *FUNC_1(SSL *VAR_0)
{
    const char *VAR_1 = "unknown";

    FUNC_0(VAR_0);

    switch (VAR_0->rlayer.rstate)
    {
        case 128:
            VAR_1 = "read header";
            break;
        case 130:
            VAR_1 = "read body";
            break;
        case 129:
            VAR_1 = "read done";
            break;
        default:
            break;
    }

    return VAR_1;
}
