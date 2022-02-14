
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int pb; TYPE_1__* active_descr; } ;
struct TYPE_4__ {int dec_config_descr_len; int dec_config_descr; } ;
typedef TYPE_1__ Mp4Descr ;
typedef TYPE_2__ MP4DescrParseContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(MP4DescrParseContext *VAR_2, int64_t VAR_3,
                                      int VAR_4)
{
    Mp4Descr *VAR_5 = VAR_2->active_descr;
    if (!VAR_5)
        return VAR_0;
    VAR_2->active_descr->dec_config_descr = FUNC_1(VAR_4);
    if (!VAR_5->dec_config_descr)
        return FUNC_0(VAR_1);
    VAR_5->dec_config_descr_len = VAR_4;
    FUNC_2(&VAR_2->pb, VAR_5->dec_config_descr, VAR_4);
    return 0;
}
