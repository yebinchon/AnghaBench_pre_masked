
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* g; } ;
struct TYPE_3__ {int codec_opts; } ;
typedef TYPE_2__ OptionsContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char const*,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, const char *VAR_2, const char *VAR_3)
{
    OptionsContext *VAR_4 = VAR_1;

    if(!FUNC_2(VAR_2, "ab")){
        FUNC_0(&VAR_4->g->codec_opts, "b:a", VAR_3, 0);
        return 0;
    } else if(!FUNC_2(VAR_2, "b")){
        FUNC_1(((void*)0), VAR_0, "Please use -b:a or -b:v, -b is ambiguous\n");
        FUNC_0(&VAR_4->g->codec_opts, "b:v", VAR_3, 0);
        return 0;
    }
    FUNC_0(&VAR_4->g->codec_opts, VAR_2, VAR_3, 0);
    return 0;
}
