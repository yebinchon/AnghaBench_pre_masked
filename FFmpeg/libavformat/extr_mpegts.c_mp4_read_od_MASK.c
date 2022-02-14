
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int descr_count; int pb; } ;
typedef int Mp4Descr ;
typedef TYPE_1__ MP4DescrParseContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int const*,unsigned int,int *,int) ;
 int FUNC_2 (TYPE_1__*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, const uint8_t *VAR_1, unsigned VAR_2,
                       Mp4Descr *VAR_3, int *VAR_4, int VAR_5)
{
    MP4DescrParseContext VAR_6;
    int VAR_7;

    VAR_7 = FUNC_1(&VAR_6, VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
    if (VAR_7 < 0)
        return VAR_7;

    VAR_7 = FUNC_2(&VAR_6, FUNC_0(&VAR_6.pb), VAR_2);

    *VAR_4 = VAR_6.descr_count;
    return VAR_7;
}
