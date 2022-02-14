
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVCodecDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,char const*,char*) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2,
                             const char* VAR_3, int VAR_4)
{
    const AVCodecDescriptor *VAR_5 = FUNC_2(VAR_4);
    FUNC_1(VAR_2, VAR_0,
           "%s codec %s not compatible with flv\n",
            VAR_3,
            VAR_5 ? VAR_5->name : "unknown");
    return FUNC_0(VAR_1);
}
