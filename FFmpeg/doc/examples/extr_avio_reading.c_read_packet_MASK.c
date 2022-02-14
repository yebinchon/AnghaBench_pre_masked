
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buffer_data {int size; int ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    struct buffer_data *VAR_4 = (struct buffer_data *)VAR_1;
    VAR_3 = FUNC_0(VAR_3, VAR_4->size);

    if (!VAR_3)
        return VAR_0;
    FUNC_2("ptr:%p size:%zu\n", VAR_4->ptr, VAR_4->size);


    FUNC_1(VAR_2, VAR_4->ptr, VAR_3);
    VAR_4->ptr += VAR_3;
    VAR_4->size -= VAR_3;

    return VAR_3;
}
