
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * extradata; scalar_t__ extradata_size; } ;
typedef TYPE_1__ hb_subtitle_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,int,int,char const*,int) ;
 scalar_t__ FUNC_3 (char*) ;

int FUNC_4(hb_subtitle_t *VAR_0, const char *VAR_1,
                               int VAR_2, int VAR_3, int VAR_4)
{

    FUNC_0(VAR_0->extradata);



    const char * VAR_5 =
        "[Script Info]\r\n"
        "ScriptType: v4.00+\r\n"
        "Collisions: Normal\r\n"
        "PlayResX: %d\r\n"
        "PlayResY: %d\r\n"
        "Timer: 100.0\r\n"
        "WrapStyle: 0\r\n"
        "\r\n"
        "[V4+ Styles]\r\n"
        "Format: Name, Fontname, Fontsize, PrimaryColour, SecondaryColour, OutlineColour, BackColour, Bold, Italic, Underline, StrikeOut, ScaleX, ScaleY, Spacing, Angle, BorderStyle, Outline, Shadow, Alignment, MarginL, MarginR, MarginV, Encoding\r\n"
        "Style: Default,%s,%d,&H00FFFFFF,&H00FFFFFF,&H000F0F0F,&H000F0F0F,0,0,0,0,100,100,0,0.00,1,2,3,2,20,20,20,0\r\n";

    VAR_0->extradata = (uint8_t*)FUNC_2(VAR_5, VAR_3, VAR_4, VAR_1, VAR_2);
    if (VAR_0->extradata == ((void*)0))
    {
        FUNC_1("hb_subtitle_add_ssa_header: malloc failed");
        return 0;
    }
    VAR_0->extradata_size = FUNC_3((char*)VAR_0->extradata) + 1;

    return 1;
}
