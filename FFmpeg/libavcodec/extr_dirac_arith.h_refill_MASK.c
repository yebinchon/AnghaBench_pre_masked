
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int counter; scalar_t__ bytestream; scalar_t__ bytestream_end; int overread; int low; int error; } ;
typedef TYPE_1__ DiracArith ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static inline void FUNC_1(DiracArith *VAR_1)
{
    int VAR_2 = VAR_1->counter;

    if (VAR_2 >= 0) {
        int VAR_3 = FUNC_0(&VAR_1->bytestream);


        if (VAR_1->bytestream > VAR_1->bytestream_end) {
            VAR_3 |= 0xff;
            if (VAR_1->bytestream > VAR_1->bytestream_end+1)
                VAR_3 |= 0xff00;

            VAR_1->bytestream = VAR_1->bytestream_end;
            VAR_1->overread ++;
            if (VAR_1->overread > 4)
                VAR_1->error = VAR_0;
        }

        VAR_1->low += VAR_3 << VAR_2;
        VAR_2 -= 16;
    }
    VAR_1->counter = VAR_2;
}
