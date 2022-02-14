
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct s_write {int prev_font_style; int prev_font_color; } ;
struct eia608_screen {unsigned char** characters; int** colors; int** fonts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__** VAR_4 ;
 int FUNC_0 (unsigned char*,int*) ;
 int FUNC_1 (unsigned char*,int*,int*) ;
 int FUNC_2 (unsigned char*,unsigned char) ;

__attribute__((used)) static unsigned FUNC_3(struct s_write *VAR_5,
                                         unsigned char *VAR_6, int VAR_7,
                                         struct eia608_screen *VAR_8)
{
    uint8_t VAR_9;
    uint8_t VAR_10;
    int VAR_11;

    unsigned char *VAR_12 = VAR_8->characters[VAR_7];
    unsigned char *VAR_13 = VAR_6;
    int VAR_14 = 0, VAR_15 = 31;

    FUNC_1(VAR_12, &VAR_14, &VAR_15);
    for (VAR_11 = VAR_14; VAR_11 <= VAR_15; VAR_11++)
    {

        VAR_10 = VAR_8->colors[VAR_7][VAR_11];
        VAR_9 = VAR_8->fonts[VAR_7][VAR_11];


        if ((VAR_9 & VAR_2) == 0 && VAR_10 == VAR_0)
        {
            if (((VAR_9 ^ VAR_5->prev_font_style) & VAR_2) ||
                (VAR_10 != VAR_5->prev_font_color))
            {
                VAR_6 += FUNC_0(VAR_6, (uint8_t*)"{\\r}");
            }
        }
        else
        {

            if (((VAR_9 ^ VAR_5->prev_font_style) & VAR_2) ||
                (VAR_10 != VAR_5->prev_font_color))
            {

                VAR_6 += FUNC_0(VAR_6, (uint8_t*)"{");
            }


            if ((VAR_9 ^ VAR_5->prev_font_style) & VAR_3)
            {
                int VAR_16 = !!(VAR_9 & VAR_3);
                VAR_6 += FUNC_0(VAR_6, (uint8_t*)"\\u");
                *VAR_6++ = VAR_16 + 0x30;
            }


            if ((VAR_9 ^ VAR_5->prev_font_style) & VAR_1)
            {
                int VAR_17 = !!(VAR_9 & VAR_1);
                VAR_6 += FUNC_0(VAR_6, (uint8_t*)"\\i");
                *VAR_6++ = VAR_17 + 0x30;
            }


            if (VAR_10 != VAR_5->prev_font_color)
            {
                VAR_6 += FUNC_0(VAR_6, (uint8_t*)"\\1c");
                VAR_6 += FUNC_0(VAR_6,
                                      (uint8_t*)VAR_4[VAR_10][1]);
            }


            if (((VAR_9 ^ VAR_5->prev_font_style) & VAR_2) ||
                (VAR_10 != VAR_5->prev_font_color))
            {

                VAR_6 += FUNC_0(VAR_6, (uint8_t*)"}");
            }
        }
        VAR_5->prev_font_style = VAR_9;
        VAR_5->prev_font_color = VAR_10;

        int VAR_18 = 0;
        VAR_18 = FUNC_2(VAR_6, VAR_12[VAR_11]);
        VAR_6 += VAR_18;
    }
    *VAR_6 = 0;
    return (unsigned) (VAR_6 - VAR_13);
}
