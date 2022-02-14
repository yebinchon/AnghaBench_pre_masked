
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {unsigned char* next_in; int avail_in; unsigned char* next_out; unsigned int avail_out; int * opaque; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int uint8_t ;
struct TYPE_11__ {size_t len; scalar_t__* str; } ;
typedef TYPE_2__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int,unsigned char**,unsigned int*) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(AVBPrint *VAR_8, const uint8_t *VAR_9,
                       const uint8_t *VAR_10)
{
    z_stream VAR_11;
    unsigned char *VAR_12;
    unsigned VAR_13;
    int VAR_14;

    VAR_11.zalloc = VAR_6;
    VAR_11.zfree = VAR_7;
    VAR_11.opaque = ((void*)0);
    if (FUNC_6(&VAR_11) != VAR_3)
        return VAR_0;
    VAR_11.next_in = (unsigned char *)VAR_9;
    VAR_11.avail_in = VAR_10 - VAR_9;
    FUNC_3(VAR_8, 0, VAR_1);

    while (VAR_11.avail_in > 0) {
        FUNC_2(VAR_8, 2, &VAR_12, &VAR_13);
        if (VAR_13 < 2) {
            VAR_14 = FUNC_0(VAR_2);
            goto fail;
        }
        VAR_11.next_out = VAR_12;
        VAR_11.avail_out = VAR_13 - 1;
        VAR_14 = FUNC_4(&VAR_11, VAR_4);
        if (VAR_14 != VAR_3 && VAR_14 != VAR_5) {
            VAR_14 = VAR_0;
            goto fail;
        }
        VAR_8->len += VAR_11.next_out - VAR_12;
        if (VAR_14 == VAR_5)
            break;
    }
    FUNC_5(&VAR_11);
    VAR_8->str[VAR_8->len] = 0;
    return 0;

fail:
    FUNC_5(&VAR_11);
    FUNC_1(VAR_8, ((void*)0));
    return VAR_14;
}
