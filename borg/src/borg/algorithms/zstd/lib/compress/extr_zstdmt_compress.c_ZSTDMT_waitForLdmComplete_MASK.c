
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ capacity; scalar_t__ start; } ;
typedef TYPE_4__ buffer_t ;
typedef int ZSTD_pthread_mutex_t ;
struct TYPE_11__ {int ldmWindowCond; int ldmWindow; int ldmWindowMutex; } ;
struct TYPE_9__ {scalar_t__ enableLdm; } ;
struct TYPE_10__ {TYPE_1__ ldmParams; } ;
struct TYPE_13__ {TYPE_3__ serial; TYPE_2__ params; } ;
typedef TYPE_5__ ZSTDMT_CCtx ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_4__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(ZSTDMT_CCtx* VAR_0, buffer_t VAR_1)
{
    if (VAR_0->params.ldmParams.enableLdm) {
        ZSTD_pthread_mutex_t* VAR_2 = &VAR_0->serial.ldmWindowMutex;
        FUNC_0(5, "ZSTDMT_waitForLdmComplete");
        FUNC_0(5, "source  [0x%zx, 0x%zx)",
                    (size_t)VAR_1.start,
                    (size_t)VAR_1.start + VAR_1.capacity);
        FUNC_2(VAR_2);
        while (FUNC_1(VAR_1, VAR_0->serial.ldmWindow)) {
            FUNC_0(5, "Waiting for LDM to finish...");
            FUNC_3(&VAR_0->serial.ldmWindowCond, VAR_2);
        }
        FUNC_0(6, "Done waiting for LDM to finish");
        FUNC_4(VAR_2);
    }
}
