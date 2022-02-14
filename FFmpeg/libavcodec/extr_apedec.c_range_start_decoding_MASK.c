
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int buffer; int low; int range; } ;
struct TYPE_5__ {TYPE_1__ rc; int ptr; } ;
typedef TYPE_2__ APEContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(APEContext *VAR_1)
{
    VAR_1->rc.buffer = FUNC_0(&VAR_1->ptr);
    VAR_1->rc.low = VAR_1->rc.buffer >> (8 - VAR_0);
    VAR_1->rc.range = (uint32_t) 1 << VAR_0;
}
