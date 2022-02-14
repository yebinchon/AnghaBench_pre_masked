
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf_size; scalar_t__* filename; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,char*) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 size_t FUNC_4 (scalar_t__*,char*) ;

__attribute__((used)) static int FUNC_5(const AVProbeData *VAR_2)
{
    if (VAR_2->filename && FUNC_2(VAR_2->filename)) {
        if (FUNC_0(VAR_2->filename))
            return VAR_1;
        else if (FUNC_3(VAR_2->filename))
            return VAR_1;
        else if (VAR_2->filename[FUNC_4(VAR_2->filename, "*?{")])
            return VAR_0 + 2;
        else if (VAR_2->buf_size == 0)
            return 0;
        else if (FUNC_1(VAR_2->filename, "raw") || FUNC_1(VAR_2->filename, "gif"))
            return 5;
        else
            return VAR_0;
    }
    return 0;
}
