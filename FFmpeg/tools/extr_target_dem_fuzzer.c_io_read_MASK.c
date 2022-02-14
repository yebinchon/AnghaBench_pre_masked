
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int pos; int fuzz; void* filesize; void* fuzz_size; } ;
typedef TYPE_1__ IOContext ;


 int VAR_0 ;
 void* FUNC_0 (void*,int) ;
 void* FUNC_1 (int,void*) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    IOContext *VAR_4 = VAR_1;
    int VAR_5 = FUNC_1(VAR_3, VAR_4->fuzz_size);

    if (!VAR_4->fuzz_size) {
        VAR_4->filesize = FUNC_1(VAR_4->pos, VAR_4->filesize);
        return VAR_0;
    }

    FUNC_2(VAR_2, VAR_4->fuzz, VAR_5);
    VAR_4->fuzz += VAR_5;
    VAR_4->fuzz_size -= VAR_5;
    VAR_4->pos += VAR_5;
    VAR_4->filesize = FUNC_0(VAR_4->filesize, VAR_4->pos);

    return VAR_5;
}
