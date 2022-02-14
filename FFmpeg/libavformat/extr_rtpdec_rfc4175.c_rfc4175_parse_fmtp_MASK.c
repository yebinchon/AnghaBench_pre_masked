
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* depth; int sampling; void* height; void* width; } ;
typedef TYPE_1__ PayloadContext ;
typedef int AVStream ;
typedef int AVFormatContext ;


 void* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, AVStream *VAR_1,
                              PayloadContext *VAR_2, const char *VAR_3,
                              const char *VAR_4)
{
    if (!FUNC_2(VAR_3, "width", 5))
        VAR_2->width = FUNC_0(VAR_4);
    else if (!FUNC_2(VAR_3, "height", 6))
        VAR_2->height = FUNC_0(VAR_4);
    else if (!FUNC_2(VAR_3, "sampling", 8))
        VAR_2->sampling = FUNC_1(VAR_4);
    else if (!FUNC_2(VAR_3, "depth", 5))
        VAR_2->depth = FUNC_0(VAR_4);

    return 0;
}
