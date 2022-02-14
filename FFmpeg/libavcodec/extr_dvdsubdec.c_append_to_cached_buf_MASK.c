
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int buf_size; scalar_t__ buf; } ;
typedef TYPE_1__ DVDSubContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2,
                                const uint8_t *VAR_3, int VAR_4)
{
    DVDSubContext *VAR_5 = VAR_2->priv_data;

    FUNC_0(VAR_4 >= 0 && VAR_5->buf_size <= sizeof(VAR_5->buf));
    if (VAR_4 >= sizeof(VAR_5->buf) - VAR_5->buf_size) {
        FUNC_1(VAR_2, VAR_1, "Attempt to reconstruct "
               "too large SPU packets aborted.\n");
        VAR_5->buf_size = 0;
        return VAR_0;
    }
    FUNC_2(VAR_5->buf + VAR_5->buf_size, VAR_3, VAR_4);
    VAR_5->buf_size += VAR_4;
    return 0;
}
