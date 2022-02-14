
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int eof_reached; } ;
struct TYPE_6__ {int fc; scalar_t__ ignore_chapters; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int,int ,int,int ,int *) ;

__attribute__((used)) static int FUNC_3(MOVContext *VAR_1, AVIOContext *VAR_2, unsigned VAR_3)
{
    int VAR_4, VAR_5;

    if (VAR_3 < 2)
        return 0;
    if (VAR_1->ignore_chapters)
        return 0;

    VAR_5 = FUNC_1(VAR_2);
    for (VAR_4 = 0; VAR_4 < VAR_5 && !VAR_2->eof_reached; VAR_4++) {
        int VAR_6 = FUNC_1(VAR_2);
        FUNC_2(VAR_1->fc, VAR_4, FUNC_0(1, 1000), VAR_6, VAR_0, ((void*)0));
    }
    return 0;
}
