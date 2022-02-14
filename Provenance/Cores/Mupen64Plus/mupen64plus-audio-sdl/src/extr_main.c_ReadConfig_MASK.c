
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int speex_quality ;


 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*,int ) ;

__attribute__((used)) static void FUNC_7(void)
{
    const char *VAR_20;


    VAR_0 = FUNC_1(VAR_19, "DEFAULT_FREQUENCY");
    VAR_15 = FUNC_0(VAR_19, "SWAP_CHANNELS");
    VAR_2 = FUNC_1(VAR_19, "PRIMARY_BUFFER_SIZE");
    VAR_3 = FUNC_1(VAR_19, "PRIMARY_BUFFER_TARGET");
    VAR_14 = FUNC_1(VAR_19, "SECONDARY_BUFFER_SIZE");
    VAR_20 = FUNC_2(VAR_19, "RESAMPLE");
    VAR_18 = FUNC_1(VAR_19, "VOLUME_CONTROL_TYPE");
    VAR_16 = FUNC_1(VAR_19, "VOLUME_ADJUST");
    VAR_17 = FUNC_1(VAR_19, "VOLUME_DEFAULT");

    if (!VAR_20) {
        VAR_7 = VAR_6;
 FUNC_3(VAR_1, "Could not find RESAMPLE configuration; use trivial resampler");
 return;
    }
    if (FUNC_4(VAR_20, "trivial") == 0) {
        VAR_7 = VAR_6;
        return;
    }
    FUNC_3(VAR_1, "Unknown RESAMPLE configuration %s; use trivial resampler", VAR_20);
    VAR_7 = VAR_6;
}
