
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ AVStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_1(const AVStream *VAR_2)
{

    if (FUNC_0(VAR_2))
        return 0;
    return VAR_2->codecpar->codec_type == VAR_1 ||
           VAR_2->codecpar->codec_type == VAR_0;
}
