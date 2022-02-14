
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
typedef scalar_t__ UInt32 ;
struct TYPE_5__ {char* extradata; scalar_t__ extradata_size; } ;
struct TYPE_4__ {scalar_t__ codec_id; TYPE_2__* priv_data; } ;
typedef int PutByteContext ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ ATDecodeContext ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,scalar_t__) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,scalar_t__) ;

__attribute__((used)) static uint8_t* FUNC_8(AVCodecContext *VAR_1, UInt32 *VAR_2)
{
    ATDecodeContext *VAR_3 = VAR_1->priv_data;
    if (VAR_1->codec_id == VAR_0) {
        char *VAR_4;
        PutByteContext VAR_5;
        *VAR_2 = 5 + 3 + 5+13 + 5+VAR_3->extradata_size;
        if (!(VAR_4 = FUNC_0(*VAR_2)))
            return ((void*)0);

        FUNC_1(&VAR_5, VAR_4, *VAR_2);


        FUNC_7(&VAR_5, 0x03, 3 + 5+13 + 5+VAR_3->extradata_size);
        FUNC_2(&VAR_5, 0);
        FUNC_6(&VAR_5, 0x00);


        FUNC_7(&VAR_5, 0x04, 13 + 5+VAR_3->extradata_size);


        FUNC_6(&VAR_5, 0x40);

        FUNC_6(&VAR_5, 0x15);

        FUNC_3(&VAR_5, 0);

        FUNC_4(&VAR_5, 0);
        FUNC_4(&VAR_5, 0);


        FUNC_7(&VAR_5, 0x05, VAR_3->extradata_size);
        FUNC_5(&VAR_5, VAR_3->extradata, VAR_3->extradata_size);
        return VAR_4;
    } else {
        *VAR_2 = VAR_3->extradata_size;
        return VAR_3->extradata;
    }
}
