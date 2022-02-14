
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int max_descr_count; int * active_descr; int * descr; scalar_t__ descr_count; scalar_t__ level; int * s; int pb; } ;
typedef int Mp4Descr ;
typedef TYPE_1__ MP4DescrParseContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,unsigned int,int ,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(MP4DescrParseContext *VAR_1, AVFormatContext *VAR_2,
                                     const uint8_t *VAR_3, unsigned VAR_4,
                                     Mp4Descr *VAR_5, int VAR_6)
{
    int VAR_7;
    if (VAR_4 > (1 << 30))
        return VAR_0;

    if ((VAR_7 = FUNC_0(&VAR_1->pb, (unsigned char *)VAR_3, VAR_4, 0,
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0))) < 0)
        return VAR_7;

    VAR_1->s = VAR_2;
    VAR_1->level = 0;
    VAR_1->descr_count = 0;
    VAR_1->descr = VAR_5;
    VAR_1->active_descr = ((void*)0);
    VAR_1->max_descr_count = VAR_6;

    return 0;
}
