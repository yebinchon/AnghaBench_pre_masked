
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; unsigned int tag; } ;
typedef TYPE_1__ AVCodecTag ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(const AVCodecTag *const *VAR_1,
                                       unsigned int VAR_2, int VAR_3)
{
    int VAR_4;




    for (VAR_4 = 0; VAR_1 && VAR_1[VAR_4]; VAR_4++) {
        const AVCodecTag *VAR_5 = VAR_1[VAR_4];
        while (VAR_5->id != VAR_0) {
            if (FUNC_0(VAR_5->tag) == FUNC_0(VAR_2) &&
                VAR_5->id == VAR_3)
                return VAR_5->tag;
            VAR_5++;
        }
    }
    return 0;
}
