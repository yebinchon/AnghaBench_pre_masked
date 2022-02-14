
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(hb_value_t *VAR_0)
{
    hb_value_t *VAR_1 = FUNC_0(VAR_0, "AudioCopyMask");
    if (VAR_1 != ((void*)0))
        return;

    VAR_1 = FUNC_3();
    FUNC_1(VAR_0, "AudioCopyMask", VAR_1);
    if (FUNC_4(FUNC_0(VAR_0, "AudioAllowMP3Pass")))
        FUNC_2(VAR_1, FUNC_5("copy:mp3"));
    if (FUNC_4(FUNC_0(VAR_0, "AudioAllowAACPass")))
        FUNC_2(VAR_1, FUNC_5("copy:aac"));
    if (FUNC_4(FUNC_0(VAR_0, "AudioAllowAC3Pass")))
        FUNC_2(VAR_1, FUNC_5("copy:ac3"));
    if (FUNC_4(FUNC_0(VAR_0, "AudioAllowDTSPass")))
        FUNC_2(VAR_1, FUNC_5("copy:dts"));
    if (FUNC_4(FUNC_0(VAR_0, "AudioAllowDTSHDPass")))
        FUNC_2(VAR_1, FUNC_5("copy:dtshd"));
    if (FUNC_4(FUNC_0(VAR_0, "AudioAllowEAC3Pass")))
        FUNC_2(VAR_1, FUNC_5("copy:eac3"));
    if (FUNC_4(FUNC_0(VAR_0, "AudioAllowFLACPass")))
        FUNC_2(VAR_1, FUNC_5("copy:flac"));
    if (FUNC_4(FUNC_0(VAR_0, "AudioAllowTRUEHDPass")))
        FUNC_2(VAR_1, FUNC_5("copy:truehd"));
}
