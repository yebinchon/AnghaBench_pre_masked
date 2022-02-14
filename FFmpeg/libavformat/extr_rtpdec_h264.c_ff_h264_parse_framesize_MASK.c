
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf1 ;
struct TYPE_3__ {void* height; void* width; } ;
typedef TYPE_1__ AVCodecParameters ;


 void* FUNC_0 (char const*) ;

void FUNC_1(AVCodecParameters *VAR_0, const char *VAR_1)
{
    char VAR_2[50];
    char *VAR_3 = VAR_2;


    while (*VAR_1 && *VAR_1 == ' ')
        VAR_1++;
    while (*VAR_1 && *VAR_1 != ' ')
        VAR_1++;
    while (*VAR_1 && *VAR_1 == ' ')
        VAR_1++;
    while (*VAR_1 && *VAR_1 != '-' && (VAR_3 - VAR_2) < sizeof(VAR_2) - 1)
        *VAR_3++ = *VAR_1++;
    *VAR_3 = '\0';



    VAR_0->width = FUNC_0(VAR_2);
    VAR_0->height = FUNC_0(VAR_1 + 1);
}
