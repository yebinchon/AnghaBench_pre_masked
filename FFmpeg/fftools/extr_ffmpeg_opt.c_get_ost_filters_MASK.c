
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* codecpar; int index; } ;
struct TYPE_6__ {char* filters; scalar_t__ filters_script; TYPE_3__* st; } ;
struct TYPE_5__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ OutputStream ;
typedef int OptionsContext ;
typedef TYPE_3__ AVStream ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static char *FUNC_4(OptionsContext *VAR_3, AVFormatContext *VAR_4,
                             OutputStream *VAR_5)
{
    AVStream *VAR_6 = VAR_5->st;

    if (VAR_5->filters_script && VAR_5->filters) {
        FUNC_0(((void*)0), VAR_1, "Both -filter and -filter_script set for "
               "output stream #%d:%d.\n", VAR_2, VAR_6->index);
        FUNC_2(1);
    }

    if (VAR_5->filters_script)
        return FUNC_3(VAR_5->filters_script);
    else if (VAR_5->filters)
        return FUNC_1(VAR_5->filters);

    return FUNC_1(VAR_6->codecpar->codec_type == VAR_0 ?
                     "null" : "anull");
}
