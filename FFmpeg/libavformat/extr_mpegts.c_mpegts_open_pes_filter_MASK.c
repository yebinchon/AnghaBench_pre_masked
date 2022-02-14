
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* opaque; int * pes_cb; } ;
struct TYPE_6__ {TYPE_2__ pes_filter; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef int PESCallback ;
typedef TYPE_2__ MpegTSPESFilter ;
typedef TYPE_3__ MpegTSFilter ;
typedef int MpegTSContext ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,unsigned int,int ) ;

__attribute__((used)) static MpegTSFilter *FUNC_1(MpegTSContext *VAR_1, unsigned int VAR_2,
                                            PESCallback *VAR_3,
                                            void *VAR_4)
{
    MpegTSFilter *VAR_5;
    MpegTSPESFilter *VAR_6;

    if (!(VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0)))
        return ((void*)0);

    VAR_6 = &VAR_5->u.pes_filter;
    VAR_6->pes_cb = VAR_3;
    VAR_6->opaque = VAR_4;
    return VAR_5;
}
