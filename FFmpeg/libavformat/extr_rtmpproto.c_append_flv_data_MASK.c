
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int has_audio; int has_video; scalar_t__ flv_size; int flv_data; scalar_t__ flv_off; } ;
struct TYPE_6__ {int size; int timestamp; int type; int * data; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMPContext ;
typedef int PutByteContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *,int const) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int const*,int const) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_2__*,int const) ;

__attribute__((used)) static int FUNC_8(RTMPContext *VAR_3, RTMPPacket *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    PutByteContext VAR_8;
    const uint8_t *VAR_9 = VAR_4->data + VAR_5;
    const int VAR_10 = VAR_4->size - VAR_5;
    uint32_t VAR_11 = VAR_4->timestamp;

    if (VAR_4->type == VAR_1) {
        VAR_3->has_audio = 1;
    } else if (VAR_4->type == VAR_2) {
        VAR_3->has_video = 1;
    }

    VAR_6 = FUNC_7(VAR_3, VAR_10 + 15);

    if ((VAR_7 = FUNC_0(&VAR_3->flv_data, VAR_3->flv_size)) < 0) {
        VAR_3->flv_size = VAR_3->flv_off = 0;
        return VAR_7;
    }
    FUNC_1(&VAR_8, VAR_3->flv_data, VAR_3->flv_size);
    FUNC_6(&VAR_8, VAR_6);
    FUNC_5(&VAR_8, VAR_4->type);
    FUNC_2(&VAR_8, VAR_10);
    FUNC_2(&VAR_8, VAR_11);
    FUNC_5(&VAR_8, VAR_11 >> 24);
    FUNC_2(&VAR_8, 0);
    FUNC_4(&VAR_8, VAR_9, VAR_10);
    FUNC_3(&VAR_8, VAR_10 + VAR_0);

    return 0;
}
