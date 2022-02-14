
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* opaque; void* zfree; void* zalloc; } ;
typedef TYPE_1__ z_stream ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{
    z_stream VAR_3;
    int VAR_4;

    VAR_3.zalloc = VAR_0;
    VAR_3.zfree = VAR_0;
    VAR_3.opaque = VAR_0;
    if (FUNC_2(&VAR_3, 0) != VAR_1)
        return -1;
    VAR_4 = FUNC_0(&VAR_3, VAR_2);
    FUNC_1(&VAR_3);

    return VAR_4;
}
