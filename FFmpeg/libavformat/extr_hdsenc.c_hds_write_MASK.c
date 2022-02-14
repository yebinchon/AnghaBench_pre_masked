
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int metadata_size; scalar_t__ out; } ;
typedef TYPE_1__ OutputStream ;


 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    OutputStream *VAR_3 = VAR_0;
    if (VAR_3->out) {
        FUNC_0(VAR_3->out, VAR_1, VAR_2);
    } else {
        if (!VAR_3->metadata_size) {
            int VAR_4;


            if ((VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2)) < 0)
                return VAR_4;
        }
    }
    return VAR_2;
}
