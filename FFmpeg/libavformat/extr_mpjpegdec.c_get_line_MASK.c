
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; scalar_t__ eof_reached; } ;
typedef TYPE_1__ AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_1, char *VAR_2, int VAR_3)
{
    FUNC_0(VAR_1, VAR_2, VAR_3);

    if (VAR_1->error)
        return VAR_1->error;

    if (VAR_1->eof_reached)
        return VAR_0;

    FUNC_1(VAR_2);
    return 0;
}
