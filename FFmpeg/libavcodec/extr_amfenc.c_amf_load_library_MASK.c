
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {TYPE_1__* pVtbl; } ;
struct TYPE_11__ {int max_b_frames; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int debug; TYPE_4__* factory; int trace; int version; int * library; scalar_t__ dts_delay; int timestamp_list; int delayed_frame; } ;
struct TYPE_9__ {scalar_t__ (* GetTrace ) (TYPE_4__*,int *) ;scalar_t__ (* GetDebug ) (TYPE_4__*,int *) ;} ;
typedef TYPE_2__ AmfContext ;
typedef TYPE_3__ AVCodecContext ;
typedef scalar_t__ AMF_RESULT ;
typedef scalar_t__ (* AMFQueryVersion_Fn ) (int *) ;
typedef scalar_t__ (* AMFInit_Fn ) (int ,TYPE_4__**) ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int,int ,char*,scalar_t__,...) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int * FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_9)
{
    AmfContext *VAR_10 = VAR_9->priv_data;
    AMFInit_Fn VAR_11;
    AMFQueryVersion_Fn VAR_12;
    AMF_RESULT VAR_13;

    VAR_10->delayed_frame = FUNC_3();
    if (!VAR_10->delayed_frame) {
        return FUNC_1(VAR_6);
    }

    VAR_10->timestamp_list = FUNC_2((VAR_9->max_b_frames + 16) * sizeof(int64_t));
    if (!VAR_10->timestamp_list) {
        return FUNC_1(VAR_6);
    }
    VAR_10->dts_delay = 0;


    VAR_10->library = FUNC_4(VAR_0, VAR_8 | VAR_7);
    FUNC_0(VAR_10, VAR_10->library != ((void*)0),
        VAR_5, "DLL %s failed to open\n", VAR_0);

    VAR_11 = (AMFInit_Fn)FUNC_5(VAR_10->library, VAR_2);
    FUNC_0(VAR_10, VAR_11 != ((void*)0), VAR_5, "DLL %s failed to find function %s\n", VAR_0, VAR_2);

    VAR_12 = (AMFQueryVersion_Fn)FUNC_5(VAR_10->library, VAR_4);
    FUNC_0(VAR_10, VAR_12 != ((void*)0), VAR_5, "DLL %s failed to find function %s\n", VAR_0, VAR_4);

    VAR_13 = VAR_12(&VAR_10->version);
    FUNC_0(VAR_10, VAR_13 == VAR_3, VAR_5, "%s failed with error %d\n", VAR_4, VAR_13);
    VAR_13 = VAR_11(VAR_1, &VAR_10->factory);
    FUNC_0(VAR_10, VAR_13 == VAR_3, VAR_5, "%s failed with error %d\n", VAR_2, VAR_13);
    VAR_13 = VAR_10->factory->pVtbl->GetTrace(VAR_10->factory, &VAR_10->trace);
    FUNC_0(VAR_10, VAR_13 == VAR_3, VAR_5, "GetTrace() failed with error %d\n", VAR_13);
    VAR_13 = VAR_10->factory->pVtbl->GetDebug(VAR_10->factory, &VAR_10->debug);
    FUNC_0(VAR_10, VAR_13 == VAR_3, VAR_5, "GetDebug() failed with error %d\n", VAR_13);
    return 0;
}
