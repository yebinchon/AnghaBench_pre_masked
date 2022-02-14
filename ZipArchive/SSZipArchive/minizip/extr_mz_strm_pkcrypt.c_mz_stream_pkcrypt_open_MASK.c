
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {int initialized; char* password; scalar_t__ verify1; scalar_t__ verify2; scalar_t__ total_in; TYPE_1__ stream; scalar_t__ total_out; } ;
typedef TYPE_2__ mz_stream_pkcrypt ;
typedef int int32_t ;
typedef int int16_t ;
typedef int header ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (void*,scalar_t__) ;
 scalar_t__ FUNC_4 (void*,scalar_t__,scalar_t__) ;
 int FUNC_5 (void*,char const*) ;
 int FUNC_6 (int ,scalar_t__*,int) ;
 int FUNC_7 (int ,scalar_t__*,int) ;

int32_t FUNC_8(void *VAR_10, const char *VAR_11, int32_t VAR_12)
{
    mz_stream_pkcrypt *VAR_13 = (mz_stream_pkcrypt *)VAR_10;
    uint16_t VAR_14 = 0;
    int16_t VAR_15 = 0;
    uint8_t VAR_16 = 0;
    uint8_t VAR_17 = 0;
    uint8_t VAR_18[VAR_6];
    const char *VAR_19 = VAR_11;

    VAR_13->total_in = 0;
    VAR_13->total_out = 0;
    VAR_13->initialized = 0;

    if (FUNC_2(VAR_13->stream.base) != VAR_0)
        return VAR_1;

    if (VAR_19 == ((void*)0))
        VAR_19 = VAR_13->password;
    if (VAR_19 == ((void*)0))
        return VAR_4;

    FUNC_5(VAR_10, VAR_19);

    if (VAR_12 & VAR_3)
    {







        FUNC_1(VAR_18, VAR_6 - 2);


        for (VAR_15 = 0; VAR_15 < VAR_6 - 2; VAR_15++)
            VAR_18[VAR_15] = FUNC_4(VAR_10, VAR_18[VAR_15], VAR_14);

        VAR_18[VAR_15++] = FUNC_4(VAR_10, VAR_13->verify1, VAR_14);
        VAR_18[VAR_15++] = FUNC_4(VAR_10, VAR_13->verify2, VAR_14);

        if (FUNC_7(VAR_13->stream.base, VAR_18, sizeof(VAR_18)) != sizeof(VAR_18))
            return VAR_9;

        VAR_13->total_out += VAR_6;

    }
    else if (VAR_12 & VAR_2)
    {
        if (FUNC_6(VAR_13->stream.base, VAR_18, sizeof(VAR_18)) != sizeof(VAR_18))
            return VAR_7;

        for (VAR_15 = 0; VAR_15 < VAR_6 - 2; VAR_15++)
            VAR_18[VAR_15] = FUNC_3(VAR_10, VAR_18[VAR_15]);

        VAR_16 = FUNC_3(VAR_10, VAR_18[VAR_15++]);
        VAR_17 = FUNC_3(VAR_10, VAR_18[VAR_15++]);


        FUNC_0(VAR_16);
        if ((VAR_17 != 0) && (VAR_17 != VAR_13->verify2))
            return VAR_5;

        VAR_13->total_in += VAR_6;

    }

    VAR_13->initialized = 1;
    return VAR_0;
}
