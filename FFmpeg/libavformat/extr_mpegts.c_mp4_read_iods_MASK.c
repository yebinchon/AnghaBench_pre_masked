
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


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int const*,unsigned int,int *,int) ;
 int FUNC_2 (TYPE_1__*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, const uint8_t *VAR_2, unsigned VAR_3,
                         Mp4Descr *VAR_4, int *VAR_5, int VAR_6)
{
    MP4DescrParseContext VAR_7;
    int VAR_8;

    VAR_8 = FUNC_1(&VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_8 = FUNC_2(&VAR_7, FUNC_0(&VAR_7.pb), VAR_3, VAR_0);

    *VAR_5 = VAR_7.descr_count;
    return VAR_8;
}
