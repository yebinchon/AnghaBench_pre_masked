
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int max_blocksize; int channels; } ;
struct TYPE_5__ {TYPE_1__ flac_stream_info; int decoded_buffer; scalar_t__ decoded; int decoded_buffer_size; } ;
typedef TYPE_2__ FLACContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int **,int *,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(FLACContext *VAR_2)
{
    int VAR_3;
    int VAR_4;

    FUNC_1(VAR_2->flac_stream_info.max_blocksize);

    VAR_3 = FUNC_4(((void*)0), VAR_2->flac_stream_info.channels,
                                          VAR_2->flac_stream_info.max_blocksize,
                                          VAR_0, 0);
    if (VAR_3 < 0)
        return VAR_3;

    FUNC_2(&VAR_2->decoded_buffer, &VAR_2->decoded_buffer_size, VAR_3);
    if (!VAR_2->decoded_buffer)
        return FUNC_0(VAR_1);

    VAR_4 = FUNC_3((uint8_t **)VAR_2->decoded, ((void*)0),
                                 VAR_2->decoded_buffer,
                                 VAR_2->flac_stream_info.channels,
                                 VAR_2->flac_stream_info.max_blocksize,
                                 VAR_0, 0);
    return VAR_4 < 0 ? VAR_4 : 0;
}
