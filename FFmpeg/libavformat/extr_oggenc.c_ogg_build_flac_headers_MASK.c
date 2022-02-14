
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int extradata_size; char* extradata; } ;
struct TYPE_5__ {int* header_len; int ** header; } ;
typedef TYPE_1__ OGGStreamContext ;
typedef int AVDictionary ;
typedef TYPE_2__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int **,int) ;
 int FUNC_4 (int **,char*,int) ;
 int FUNC_5 (int **,int) ;
 int * FUNC_6 (int,int,int*,int **,int ,int *,int ) ;

__attribute__((used)) static int FUNC_7(AVCodecParameters *VAR_3,
                                  OGGStreamContext *VAR_4, int VAR_5,
                                  AVDictionary **VAR_6)
{
    uint8_t *VAR_7;

    if (VAR_3->extradata_size < VAR_2)
        return FUNC_0(VAR_0);


    VAR_4->header_len[0] = 51;
    VAR_4->header[0] = FUNC_1(51);
    VAR_7 = VAR_4->header[0];
    if (!VAR_7)
        return FUNC_0(VAR_1);
    FUNC_5(&VAR_7, 0x7F);
    FUNC_4(&VAR_7, "FLAC", 4);
    FUNC_5(&VAR_7, 1);
    FUNC_5(&VAR_7, 0);
    FUNC_2(&VAR_7, 1);
    FUNC_4(&VAR_7, "fLaC", 4);
    FUNC_5(&VAR_7, 0x00);
    FUNC_3(&VAR_7, 34);
    FUNC_4(&VAR_7, VAR_3->extradata, VAR_2);


    VAR_7 = FUNC_6(4, VAR_5, &VAR_4->header_len[1], VAR_6, 0, ((void*)0), 0);
    if (!VAR_7)
        return FUNC_0(VAR_1);
    VAR_4->header[1] = VAR_7;
    FUNC_5(&VAR_7, 0x84);
    FUNC_3(&VAR_7, VAR_4->header_len[1] - 4);

    return 0;
}
