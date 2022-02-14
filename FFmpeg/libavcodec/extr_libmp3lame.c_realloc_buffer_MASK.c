
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer_size; int buffer_index; int buffer; int avctx; } ;
typedef TYPE_1__ LAMEContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_2(LAMEContext *VAR_1)
{
    if (!VAR_1->buffer || VAR_1->buffer_size - VAR_1->buffer_index < VAR_0) {
        int VAR_2 = VAR_1->buffer_index + 2 * VAR_0, VAR_3;

        FUNC_1(VAR_1->avctx, "resizing output buffer: %d -> %d\n", VAR_1->buffer_size,
                VAR_2);
        if ((VAR_3 = FUNC_0(&VAR_1->buffer, VAR_2)) < 0) {
            VAR_1->buffer_size = VAR_1->buffer_index = 0;
            return VAR_3;
        }
        VAR_1->buffer_size = VAR_2;
    }
    return 0;
}
