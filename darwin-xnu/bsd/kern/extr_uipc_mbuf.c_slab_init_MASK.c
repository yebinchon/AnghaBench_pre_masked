
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {unsigned int sl_len; int sl_refcnt; int sl_chunks; void* sl_head; void* sl_base; int sl_flags; int sl_class; } ;
typedef TYPE_1__ mcl_slab_t ;
typedef int mbuf_class_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(mcl_slab_t *VAR_0, mbuf_class_t VAR_1, u_int32_t VAR_2,
    void *VAR_3, void *VAR_4, unsigned int VAR_5, int VAR_6, int VAR_7)
{
 VAR_0->sl_class = VAR_1;
 VAR_0->sl_flags = VAR_2;
 VAR_0->sl_base = VAR_3;
 VAR_0->sl_head = VAR_4;
 VAR_0->sl_len = VAR_5;
 VAR_0->sl_refcnt = VAR_6;
 VAR_0->sl_chunks = VAR_7;
 FUNC_0(VAR_0);
}
