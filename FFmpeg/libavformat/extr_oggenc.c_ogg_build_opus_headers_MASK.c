
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
typedef int AVChapter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int **,char*,int) ;
 int * FUNC_3 (int,int,int*,int **,int ,int **,unsigned int) ;

__attribute__((used)) static int FUNC_4(AVCodecParameters *VAR_3,
                                  OGGStreamContext *VAR_4, int VAR_5,
                                  AVDictionary **VAR_6, AVChapter **VAR_7,
                                  unsigned int VAR_8)
{
    uint8_t *VAR_9;

    if (VAR_3->extradata_size < VAR_2)
        return VAR_0;


    VAR_9 = FUNC_1(VAR_3->extradata_size);
    if (!VAR_9)
        return FUNC_0(VAR_1);
    VAR_4->header[0] = VAR_9;
    VAR_4->header_len[0] = VAR_3->extradata_size;
    FUNC_2(&VAR_9, VAR_3->extradata, VAR_3->extradata_size);


    VAR_9 = FUNC_3(8, VAR_5, &VAR_4->header_len[1], VAR_6, 0, VAR_7, VAR_8);
    if (!VAR_9)
        return FUNC_0(VAR_1);
    VAR_4->header[1] = VAR_9;
    FUNC_2(&VAR_9, "OpusTags", 8);

    return 0;
}
