
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int alive; int resv; scalar_t__ filesize; scalar_t__ nfile; } ;
typedef TYPE_1__ Wal ;



__attribute__((used)) static int
FUNC_0(Wal *VAR_0)
{
    int64 VAR_1, VAR_2;

    VAR_2 = VAR_0->alive + VAR_0->resv;
    VAR_1 = (int64)VAR_0->nfile * (int64)VAR_0->filesize - VAR_2;
    if (!VAR_2) return 0;
    return VAR_1 / VAR_2;
}
