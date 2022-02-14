
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filename; } ;
typedef TYPE_1__ AVProbeData ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_0)
{
    int VAR_1 = FUNC_1(VAR_0);
    return VAR_1 && FUNC_0(VAR_0->filename, "pgmyuv") ? VAR_1 : 0;
}
