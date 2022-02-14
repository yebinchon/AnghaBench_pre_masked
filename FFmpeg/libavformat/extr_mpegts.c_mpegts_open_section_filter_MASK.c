
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int check_crc; int last_ver; int section_buf; void* opaque; int * section_cb; } ;
struct TYPE_7__ {TYPE_2__ section_filter; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef int SectionCallback ;
typedef TYPE_2__ MpegTSSectionFilter ;
typedef TYPE_3__ MpegTSFilter ;
typedef int MpegTSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *,unsigned int,int ) ;

__attribute__((used)) static MpegTSFilter *FUNC_3(MpegTSContext *VAR_2,
                                                unsigned int VAR_3,
                                                SectionCallback *VAR_4,
                                                void *VAR_5,
                                                int VAR_6)
{
    MpegTSFilter *VAR_7;
    MpegTSSectionFilter *VAR_8;

    if (!(VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_1)))
        return ((void*)0);
    VAR_8 = &VAR_7->u.section_filter;
    VAR_8->section_cb = VAR_4;
    VAR_8->opaque = VAR_5;
    VAR_8->section_buf = FUNC_1(VAR_0);
    VAR_8->check_crc = VAR_6;
    VAR_8->last_ver = -1;

    if (!VAR_8->section_buf) {
        FUNC_0(VAR_7);
        return ((void*)0);
    }
    return VAR_7;
}
