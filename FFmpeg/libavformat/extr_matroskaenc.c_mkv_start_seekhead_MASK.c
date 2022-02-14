
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reserved_size; int max_entries; int filepos; int segment_offset; } ;
typedef TYPE_1__ mkv_seekhead ;
typedef int int64_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static mkv_seekhead *FUNC_3(AVIOContext *VAR_1, int64_t VAR_2,
                                        int VAR_3)
{
    mkv_seekhead *VAR_4 = FUNC_0(sizeof(mkv_seekhead));
    if (!VAR_4)
        return ((void*)0);

    VAR_4->segment_offset = VAR_2;

    if (VAR_3 > 0) {
        VAR_4->filepos = FUNC_1(VAR_1);



        VAR_4->reserved_size = VAR_3 * VAR_0 + 19;
        VAR_4->max_entries = VAR_3;
        FUNC_2(VAR_1, VAR_4->reserved_size);
    }
    return VAR_4;
}
