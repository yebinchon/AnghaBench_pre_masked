
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int * buf; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *,scalar_t__,int) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_1, uint8_t VAR_2, int VAR_3, const uint8_t *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    RTPMuxContext *VAR_9 = VAR_1->priv_data;

    FUNC_0(&VAR_9->buf[0], 0);
    FUNC_1 (&VAR_9->buf[2], VAR_6 ? (VAR_7 ? (0x03) : (0x02)) : 0x00);
    FUNC_1 (&VAR_9->buf[3], VAR_2);
    if (VAR_5 > 0)
        FUNC_3(&VAR_9->buf[4 + VAR_3], VAR_4, VAR_5);
    FUNC_2(VAR_1, VAR_9->buf, VAR_0 + VAR_3 + VAR_5, VAR_8);
}
