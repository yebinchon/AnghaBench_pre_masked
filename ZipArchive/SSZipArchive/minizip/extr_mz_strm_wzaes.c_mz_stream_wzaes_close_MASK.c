
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {int mode; scalar_t__ initialized; int total_in; TYPE_1__ stream; int total_out; int hmac; } ;
typedef TYPE_2__ mz_stream_wzaes ;
typedef int int32_t ;
typedef int computed_hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *,int) ;

int32_t FUNC_4(void *VAR_8)
{
    mz_stream_wzaes *VAR_9 = (mz_stream_wzaes *)VAR_8;
    uint8_t VAR_10[VAR_0];
    uint8_t VAR_11[VAR_2];

    FUNC_1(VAR_9->hmac, VAR_11, sizeof(VAR_11));

    if (VAR_9->mode & VAR_5)
    {
        if (FUNC_3(VAR_9->stream.base, VAR_11, VAR_0) != VAR_0)
            return VAR_7;

        VAR_9->total_out += VAR_0;
    }
    else if (VAR_9->mode & VAR_4)
    {
        if (FUNC_2(VAR_9->stream.base, VAR_10, VAR_0) != VAR_0)
            return VAR_6;

        VAR_9->total_in += VAR_0;


        if (FUNC_0(VAR_11, VAR_10, VAR_0) != 0)
            return VAR_1;
    }

    VAR_9->initialized = 0;
    return VAR_3;
}
