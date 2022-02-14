
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ extradata_size; int extradata; } ;
struct TYPE_5__ {int ** header; scalar_t__* header_len; } ;
typedef TYPE_1__ OGGStreamContext ;
typedef int AVDictionary ;
typedef TYPE_2__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int **,int ,scalar_t__) ;
 int * FUNC_4 (int ,int,scalar_t__*,int **,int ,int *,int ) ;

__attribute__((used)) static int FUNC_5(AVCodecParameters *VAR_3,
                                   OGGStreamContext *VAR_4, int VAR_5,
                                   AVDictionary **VAR_6)
{
    uint8_t *VAR_7;

    if (VAR_3->extradata_size < VAR_2)
        return VAR_0;


    VAR_7 = FUNC_2(VAR_2);
    if (!VAR_7)
        return FUNC_0(VAR_1);
    VAR_4->header[0] = VAR_7;
    VAR_4->header_len[0] = VAR_2;
    FUNC_3(&VAR_7, VAR_3->extradata, VAR_2);
    FUNC_1(&VAR_4->header[0][68], 0);


    VAR_7 = FUNC_4(0, VAR_5, &VAR_4->header_len[1], VAR_6, 0, ((void*)0), 0);
    if (!VAR_7)
        return FUNC_0(VAR_1);
    VAR_4->header[1] = VAR_7;

    return 0;
}
