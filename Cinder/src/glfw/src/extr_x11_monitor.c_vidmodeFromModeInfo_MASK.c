
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int height; int width; } ;
typedef TYPE_2__ XRRModeInfo ;
struct TYPE_12__ {scalar_t__ rotation; } ;
typedef TYPE_3__ XRRCrtcInfo ;
struct TYPE_10__ {int screen; int display; } ;
struct TYPE_14__ {TYPE_1__ x11; } ;
struct TYPE_13__ {int blueBits; int greenBits; int redBits; int refreshRate; int height; int width; } ;
typedef TYPE_4__ GLFWvidmode ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_9__ VAR_2 ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (TYPE_2__ const*) ;

__attribute__((used)) static GLFWvidmode FUNC_3(const XRRModeInfo* VAR_3,
                                       const XRRCrtcInfo* VAR_4)
{
    GLFWvidmode VAR_5;

    if (VAR_4->rotation == VAR_1 || VAR_4->rotation == VAR_0)
    {
        VAR_5.width = VAR_3->height;
        VAR_5.height = VAR_3->width;
    }
    else
    {
        VAR_5.width = VAR_3->width;
        VAR_5.height = VAR_3->height;
    }

    VAR_5.refreshRate = FUNC_2(VAR_3);

    FUNC_1(FUNC_0(VAR_2.x11.display, VAR_2.x11.screen),
                  &VAR_5.redBits, &VAR_5.greenBits, &VAR_5.blueBits);

    return VAR_5;
}
