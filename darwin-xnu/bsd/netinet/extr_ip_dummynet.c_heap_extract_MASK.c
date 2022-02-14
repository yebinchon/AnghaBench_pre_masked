
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct dn_heap {int elements; scalar_t__ offset; TYPE_1__* p; } ;
struct TYPE_2__ {int key; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dn_heap*,int) ;
 int FUNC_3 (struct dn_heap*,int) ;
 scalar_t__ FUNC_4 (struct dn_heap*) ;
 int FUNC_5 (struct dn_heap*,int,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,...) ;

__attribute__((used)) static void
FUNC_8(struct dn_heap *VAR_0, void *VAR_1)
{
    int VAR_2, VAR_3, VAR_4 = VAR_0->elements - 1 ;

    if (VAR_4 < 0) {
 FUNC_7("dummynet: warning, extract from empty heap 0x%llx\n",
     (uint64_t)FUNC_4(VAR_0));
 return ;
    }
    VAR_3 = 0 ;
    if (VAR_1 != ((void*)0)) {
 if (VAR_0->offset <= 0)
     FUNC_6("dummynet: heap_extract from middle not supported on this heap!!!\n");
 VAR_3 = *((int *)((char *)VAR_1 + VAR_0->offset)) ;
 if (VAR_3 < 0 || VAR_3 >= VAR_0->elements) {
     FUNC_7("dummynet: heap_extract, father %d out of bound 0..%d\n",
  VAR_3, VAR_0->elements);
     FUNC_6("dummynet: heap_extract");
 }
    }
    FUNC_2(VAR_0, VAR_3);
    VAR_2 = FUNC_1(VAR_3) ;
    while (VAR_2 <= VAR_4) {
 if (VAR_2 != VAR_4 && FUNC_0(VAR_0->p[VAR_2+1].key, VAR_0->p[VAR_2].key) )
     VAR_2 = VAR_2+1 ;
 VAR_0->p[VAR_3] = VAR_0->p[VAR_2] ;
 FUNC_3(VAR_0, VAR_3);
 VAR_3 = VAR_2 ;
 VAR_2 = FUNC_1(VAR_2) ;
    }
    VAR_0->elements-- ;
    if (VAR_3 != VAR_4) {



 VAR_0->p[VAR_3] = VAR_0->p[VAR_4] ;
 FUNC_5(VAR_0, VAR_3, ((void*)0));
    }
}
