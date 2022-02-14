
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_3__ {char* name; int bits; } ;
typedef TYPE_1__ SampleFmtInfo ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int,char*,...) ;

char *FUNC_1 (char *VAR_2, int VAR_3, enum AVSampleFormat VAR_4)
{

    if (VAR_4 < 0)
        FUNC_0(VAR_2, VAR_3, "name  " " depth");
    else if (VAR_4 < VAR_0) {
        SampleFmtInfo VAR_5 = VAR_1[VAR_4];
        FUNC_0 (VAR_2, VAR_3, "%-6s" "   %2d ", VAR_5.name, VAR_5.bits);
    }

    return VAR_2;
}
