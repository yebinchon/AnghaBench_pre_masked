
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_3__ {int index; int file_index; scalar_t__ filters_script; scalar_t__ filters; } ;
typedef TYPE_1__ OutputStream ;
typedef int OptionsContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,char*,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(OptionsContext *VAR_1, AVFormatContext *VAR_2,
                                     const OutputStream *VAR_3, enum AVMediaType VAR_4)
{
    if (VAR_3->filters_script || VAR_3->filters) {
        FUNC_1(((void*)0), VAR_0,
               "%s '%s' was defined for %s output stream %d:%d but codec copy was selected.\n"
               "Filtering and streamcopy cannot be used together.\n",
               VAR_3->filters ? "Filtergraph" : "Filtergraph script",
               VAR_3->filters ? VAR_3->filters : VAR_3->filters_script,
               FUNC_0(VAR_4), VAR_3->file_index, VAR_3->index);
        FUNC_2(1);
    }
}
