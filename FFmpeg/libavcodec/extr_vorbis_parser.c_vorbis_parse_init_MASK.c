
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int extradata_parsed; int valid_extradata; size_t* mode_blocksize; int * blocksize; int previous_blocksize; int * class; } ;
typedef TYPE_1__ AVVorbisParseContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int const*,int,int,int const**,int*) ;
 int FUNC_2 (TYPE_1__*,int const*,int) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(AVVorbisParseContext *VAR_2,
                             const uint8_t *VAR_3, int VAR_4)
{
    const uint8_t *VAR_5[3];
    int VAR_6[3];
    int VAR_7;

    VAR_2->class = &VAR_1;
    VAR_2->extradata_parsed = 1;

    if ((VAR_7 = FUNC_1(VAR_3,
                                         VAR_4, 30,
                                         VAR_5, VAR_6)) < 0) {
        FUNC_0(VAR_2, VAR_0, "Extradata corrupt.\n");
        return VAR_7;
    }

    if ((VAR_7 = FUNC_2(VAR_2, VAR_5[0], VAR_6[0])) < 0)
        return VAR_7;

    if ((VAR_7 = FUNC_3(VAR_2, VAR_5[2], VAR_6[2])) < 0)
        return VAR_7;

    VAR_2->valid_extradata = 1;
    VAR_2->previous_blocksize = VAR_2->blocksize[VAR_2->mode_blocksize[0]];

    return 0;
}
