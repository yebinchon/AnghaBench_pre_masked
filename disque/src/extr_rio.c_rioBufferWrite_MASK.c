
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t pos; int ptr; } ;
struct TYPE_6__ {TYPE_1__ buffer; } ;
struct TYPE_7__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;


 int FUNC_0 (int ,char*,size_t) ;

__attribute__((used)) static size_t FUNC_1(rio *VAR_0, const void *VAR_1, size_t VAR_2) {
    VAR_0->io.buffer.ptr = FUNC_0(VAR_0->io.buffer.ptr,(char*)VAR_1,VAR_2);
    VAR_0->io.buffer.pos += VAR_2;
    return 1;
}
