
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int c; int* data; } ;
typedef TYPE_1__ image ;
typedef scalar_t__ IMTYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (char*,char*,char const*) ;
 int FUNC_4 (char*,int,int,int,unsigned char*) ;
 int FUNC_5 (char*,int,int,int,unsigned char*,int) ;
 int FUNC_6 (char*,int,int,int,unsigned char*,int) ;
 int FUNC_7 (char*,int,int,int,unsigned char*) ;
 int VAR_4 ;

void FUNC_8(image VAR_5, const char *VAR_6, IMTYPE VAR_7, int VAR_8)
{
    char VAR_9[256];

    if(VAR_7 == VAR_2) FUNC_3(VAR_9, "%s.png", VAR_6);
    else if (VAR_7 == VAR_0) FUNC_3(VAR_9, "%s.bmp", VAR_6);
    else if (VAR_7 == VAR_3) FUNC_3(VAR_9, "%s.tga", VAR_6);
    else if (VAR_7 == VAR_1) FUNC_3(VAR_9, "%s.jpg", VAR_6);
    else FUNC_3(VAR_9, "%s.png", VAR_6);
    unsigned char *VAR_10 = FUNC_0(VAR_5.w*VAR_5.h*VAR_5.c, sizeof(char));
    int VAR_11,VAR_12;
    for(VAR_12 = 0; VAR_12 < VAR_5.c; ++VAR_12){
        for(VAR_11 = 0; VAR_11 < VAR_5.w*VAR_5.h; ++VAR_11){
            VAR_10[VAR_11*VAR_5.c+VAR_12] = (unsigned char) (255*VAR_5.data[VAR_11 + VAR_12*VAR_5.w*VAR_5.h]);
        }
    }
    int VAR_13 = 0;
    if(VAR_7 == VAR_2) VAR_13 = FUNC_6(VAR_9, VAR_5.w, VAR_5.h, VAR_5.c, VAR_10, VAR_5.w*VAR_5.c);
    else if (VAR_7 == VAR_0) VAR_13 = FUNC_4(VAR_9, VAR_5.w, VAR_5.h, VAR_5.c, VAR_10);
    else if (VAR_7 == VAR_3) VAR_13 = FUNC_7(VAR_9, VAR_5.w, VAR_5.h, VAR_5.c, VAR_10);
    else if (VAR_7 == VAR_1) VAR_13 = FUNC_5(VAR_9, VAR_5.w, VAR_5.h, VAR_5.c, VAR_10, VAR_8);
    FUNC_2(VAR_10);
    if(!VAR_13) FUNC_1(VAR_4, "Failed to write image %s\n", VAR_9);
}
