
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int v_display; int v_depth; int v_height; int v_width; int v_rowBytes; scalar_t__ v_baseAddr; } ;
struct TYPE_7__ {int v_display; int v_depth; int v_height; int v_width; int v_rowBytes; scalar_t__ v_baseAddr; } ;
struct TYPE_10__ {int flags; TYPE_2__ VideoV1; TYPE_1__ Video; int deviceTreeP; } ;
typedef TYPE_4__ boot_args ;
typedef int boolean_t ;
struct TYPE_9__ {void* v_scale; int v_pixelFormat; int v_display; int v_depth; int v_height; int v_width; int v_rowBytes; scalar_t__ v_baseAddr; } ;
struct TYPE_11__ {scalar_t__ initialized; void* deviceTreeHead; TYPE_3__ video; void* bootArgs; } ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;

void FUNC_5(boolean_t VAR_6, void * VAR_7)
{
    boot_args *VAR_8 = (boot_args *)VAR_7;

    if (VAR_1.initialized == VAR_0) {
     VAR_1.initialized = VAR_2;


        VAR_1.bootArgs = VAR_7;
        VAR_1.deviceTreeHead = (void *) FUNC_1(VAR_8->deviceTreeP);
        if (VAR_8->Video.v_baseAddr) {
            VAR_1.video.v_baseAddr = VAR_8->Video.v_baseAddr;
            VAR_1.video.v_rowBytes = VAR_8->Video.v_rowBytes;
            VAR_1.video.v_width = VAR_8->Video.v_width;
            VAR_1.video.v_height = VAR_8->Video.v_height;
            VAR_1.video.v_depth = VAR_8->Video.v_depth;
            VAR_1.video.v_display = VAR_8->Video.v_display;
            FUNC_4(VAR_1.video.v_pixelFormat, "PPPPPPPP",
                sizeof(VAR_1.video.v_pixelFormat));
        } else {
            VAR_1.video.v_baseAddr = VAR_8->VideoV1.v_baseAddr;
            VAR_1.video.v_rowBytes = VAR_8->VideoV1.v_rowBytes;
            VAR_1.video.v_width = VAR_8->VideoV1.v_width;
            VAR_1.video.v_height = VAR_8->VideoV1.v_height;
            VAR_1.video.v_depth = VAR_8->VideoV1.v_depth;
            VAR_1.video.v_display = VAR_8->VideoV1.v_display;
            FUNC_4(VAR_1.video.v_pixelFormat, "PPPPPPPP",
                    sizeof(VAR_1.video.v_pixelFormat));
        }







 VAR_1.video.v_scale = VAR_4;

    }

    if (!VAR_6) {

        if (VAR_1.deviceTreeHead) {
            FUNC_0(VAR_1.deviceTreeHead);
        }

        FUNC_2(VAR_8);
        FUNC_3();
    }

}
