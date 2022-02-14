
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tqe_prev; } ;
struct TYPE_6__ {int stqe_next; } ;
struct TYPE_8__ {TYPE_2__ te; TYPE_1__ qe; int buf; int owner; int eof; int length; int size; } ;
typedef TYPE_3__ buf_desc_t ;


 int FUNC_0 (int ,char*,TYPE_3__*,int ,int ,...) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(buf_desc_t *VAR_1)
{
    FUNC_0(VAR_0, "=> %p: size: %d(%d), eof: %d, owner: %d", VAR_1, VAR_1->size, VAR_1->length, VAR_1->eof, VAR_1->owner);
    FUNC_0(VAR_0, "   buf: %p, stqe_next: %p, tqe-prev: %p", VAR_1->buf, VAR_1->qe.stqe_next, VAR_1->te.tqe_prev);
}
