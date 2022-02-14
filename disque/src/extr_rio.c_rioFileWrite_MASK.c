
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ buffered; scalar_t__ autosync; int fp; } ;
struct TYPE_6__ {TYPE_1__ file; } ;
struct TYPE_7__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (void const*,size_t,int,int ) ;

__attribute__((used)) static size_t FUNC_4(rio *VAR_0, const void *VAR_1, size_t VAR_2) {
    size_t VAR_3;

    VAR_3 = FUNC_3(VAR_1,VAR_2,1,VAR_0->io.file.fp);
    VAR_0->io.file.buffered += VAR_2;

    if (VAR_0->io.file.autosync &&
        VAR_0->io.file.buffered >= VAR_0->io.file.autosync)
    {
        FUNC_1(VAR_0->io.file.fp);
        FUNC_0(FUNC_2(VAR_0->io.file.fp));
        VAR_0->io.file.buffered = 0;
    }
    return VAR_3;
}
