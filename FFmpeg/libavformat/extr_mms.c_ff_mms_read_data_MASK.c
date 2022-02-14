
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int remaining_in_len; int read_in_ptr; } ;
typedef TYPE_1__ MMSContext ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int *,int,int) ;

int FUNC_2(MMSContext *VAR_0, uint8_t *VAR_1, const int VAR_2)
{
    int VAR_3;
    VAR_3 = FUNC_0(VAR_2, VAR_0->remaining_in_len);
    FUNC_1(VAR_1, VAR_0->read_in_ptr, VAR_3);
    VAR_0->remaining_in_len -= VAR_3;
    VAR_0->read_in_ptr += VAR_3;
    return VAR_3;
}
