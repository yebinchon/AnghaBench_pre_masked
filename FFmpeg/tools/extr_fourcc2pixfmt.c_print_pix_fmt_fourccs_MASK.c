
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {scalar_t__ pix_fmt; int fourcc; } ;
typedef TYPE_1__ PixelFormatTag ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char) ;

__attribute__((used)) static void FUNC_2(enum AVPixelFormat VAR_1, const PixelFormatTag *VAR_2, char VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_2[VAR_4].pix_fmt != VAR_0; VAR_4++)
        if (VAR_2[VAR_4].pix_fmt == VAR_1)
            FUNC_1("%s%c", FUNC_0(VAR_2[VAR_4].fourcc), VAR_3);
}
