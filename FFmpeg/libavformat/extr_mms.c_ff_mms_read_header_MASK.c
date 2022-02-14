
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int asf_header_size; int asf_header_read_size; char* asf_header; } ;
typedef TYPE_1__ MMSContext ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int *,char*,int) ;

int FUNC_3(MMSContext *VAR_0, uint8_t *VAR_1, const int VAR_2)
{
    char *VAR_3;
    int VAR_4;
    int VAR_5 = VAR_0->asf_header_size - VAR_0->asf_header_read_size;
    VAR_4 = FUNC_0(VAR_2, VAR_5);
    VAR_3 = VAR_0->asf_header + VAR_0->asf_header_read_size;
    FUNC_2(VAR_1, VAR_3, VAR_4);
    if (VAR_0->asf_header_read_size == VAR_0->asf_header_size) {
        FUNC_1(&VAR_0->asf_header);
    }
    VAR_0->asf_header_read_size += VAR_4;
    return VAR_4;
}
