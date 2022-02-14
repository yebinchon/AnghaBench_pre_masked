
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int metadata; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (char*,int,char*,double const) ;

__attribute__((used)) static double FUNC_2(AVFrame *VAR_0, int VAR_1, int VAR_2)
{
    char VAR_3[32];
    const double VAR_4 = (double)VAR_1 / VAR_2;
    FUNC_1(VAR_3, sizeof(VAR_3), "%f", VAR_4);
    FUNC_0(&VAR_0->metadata, "lavfi.color_quant_ratio", VAR_3, 0);
    return VAR_4;
}
