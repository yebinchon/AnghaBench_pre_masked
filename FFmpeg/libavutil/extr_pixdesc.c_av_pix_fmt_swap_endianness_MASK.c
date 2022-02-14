
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int name ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

enum AVPixelFormat FUNC_5(enum AVPixelFormat VAR_1)
{
    const AVPixFmtDescriptor *VAR_2 = FUNC_0(VAR_1);
    char VAR_3[16];
    int VAR_4;

    if (!VAR_2 || FUNC_4(VAR_2->name) < 2)
        return VAR_0;
    FUNC_1(VAR_3, VAR_2->name, sizeof(VAR_3));
    VAR_4 = FUNC_4(VAR_3) - 2;
    if (FUNC_3(VAR_3 + VAR_4, "be") && FUNC_3(VAR_3 + VAR_4, "le"))
        return VAR_0;

    VAR_3[VAR_4] ^= 'b' ^ 'l';

    return FUNC_2(VAR_3);
}
