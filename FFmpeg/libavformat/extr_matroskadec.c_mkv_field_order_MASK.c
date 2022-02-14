
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {scalar_t__ muxingapp; } ;
typedef TYPE_1__ MatroskaDemuxContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (scalar_t__,char*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_1(MatroskaDemuxContext *VAR_6, int64_t VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11 = 0;



    if (VAR_6->muxingapp && FUNC_0(VAR_6->muxingapp, "Lavf%d.%d.%d", &VAR_8, &VAR_9, &VAR_10) == 3)
        VAR_11 = (VAR_8 == 57 && VAR_9 >= 36 && VAR_9 <= 51 && VAR_10 >= 100);

    switch (VAR_7) {
    case 131:
        return VAR_2;
    case 128:
        return VAR_5;
    case 129:
        return VAR_4;
    case 133:
        return VAR_0;
    case 132:
        return VAR_11 ? VAR_3 : VAR_1;
    case 130:
        return VAR_11 ? VAR_1 : VAR_3;
    default:
        return VAR_5;
    }
}
