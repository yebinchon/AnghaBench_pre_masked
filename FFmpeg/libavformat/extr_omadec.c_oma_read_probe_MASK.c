
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__* buf; unsigned int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,int ) ;
 unsigned int FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (scalar_t__ const*,char*,int) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_5)
{
    const uint8_t *VAR_6 = VAR_5->buf;
    unsigned VAR_7 = 0;

    if (VAR_5->buf_size >= VAR_4 && FUNC_0(VAR_6, VAR_3))
        VAR_7 = FUNC_1(VAR_6);


    if (VAR_5->buf_size < VAR_7 + 5)

        return VAR_7 ? VAR_0/2 : 0;

    VAR_6 += VAR_7;

    if (!FUNC_2(VAR_6, "EA3", 3) && !VAR_6[4] && VAR_6[5] == VAR_2)
        return VAR_1;
    else
        return 0;
}
