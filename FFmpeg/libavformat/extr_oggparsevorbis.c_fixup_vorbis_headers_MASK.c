
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
struct oggvorbis_private {int* len; int * packet; } ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 unsigned char* FUNC_2 (int *,int) ;
 int FUNC_3 (unsigned char**,scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (unsigned char*,char,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_3,
                                struct oggvorbis_private *VAR_4,
                                uint8_t **VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10;
    unsigned char *VAR_11;

    VAR_8 = VAR_4->len[0] + VAR_4->len[1] + VAR_4->len[2];
    VAR_10 = VAR_8 + VAR_8 / 255 + 64;

    if (*VAR_5)
        return VAR_0;

    VAR_11 = *VAR_5 = FUNC_2(((void*)0), VAR_10);
    if (!VAR_11)
        return FUNC_0(VAR_2);
    FUNC_6(*VAR_5, '\0', VAR_10);

    VAR_11[0] = 2;
    VAR_7 = 1;
    VAR_7 += FUNC_4(&VAR_11[VAR_7], VAR_4->len[0]);
    VAR_7 += FUNC_4(&VAR_11[VAR_7], VAR_4->len[1]);
    for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
        FUNC_5(&VAR_11[VAR_7], VAR_4->packet[VAR_6], VAR_4->len[VAR_6]);
        VAR_7 += VAR_4->len[VAR_6];
        FUNC_1(&VAR_4->packet[VAR_6]);
    }
    if ((VAR_9 = FUNC_3(VAR_5, VAR_7 + VAR_1)) < 0)
        return VAR_9;
    return VAR_7;
}
