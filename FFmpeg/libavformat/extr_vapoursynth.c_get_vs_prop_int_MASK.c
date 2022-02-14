
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
typedef int VSMap ;
struct TYPE_6__ {TYPE_1__* vsapi; } ;
typedef TYPE_2__ VSContext ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {int (* propGetInt ) (int const*,char const*,int ,int*) ;} ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,char const*,int ,int*) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_2, const VSMap *VAR_3, const char *VAR_4, int VAR_5)
{
    VSContext *VAR_6 = VAR_2->priv_data;
    int64_t VAR_7;
    int VAR_8 = 1;

    VAR_7 = VAR_6->vsapi->propGetInt(VAR_3, VAR_4, 0, &VAR_8);
    return VAR_8 || VAR_7 < VAR_1 || VAR_7 > VAR_0 ? VAR_5 : VAR_7;
}
