
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int resv; int free; } ;
typedef TYPE_1__ File ;



__attribute__((used)) static void
FUNC_0(File *VAR_0, File *VAR_1, int VAR_2)
{
    VAR_1->resv -= VAR_2;
    VAR_1->free += VAR_2;
    VAR_0->resv += VAR_2;
    VAR_0->free -= VAR_2;
}
