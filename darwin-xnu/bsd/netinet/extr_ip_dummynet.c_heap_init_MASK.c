
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_heap_entry {int dummy; } ;
struct dn_heap {int size; struct dn_heap_entry* p; } ;


 int FUNC_0 (struct dn_heap_entry*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dn_heap_entry* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct dn_heap_entry*,struct dn_heap_entry*,int) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static int
FUNC_4(struct dn_heap *VAR_3, int VAR_4)
{
    struct dn_heap_entry *VAR_5;

    if (VAR_3->size >= VAR_4 ) {
 FUNC_3("dummynet: heap_init, Bogus call, have %d want %d\n",
  VAR_3->size, VAR_4);
 return 0 ;
    }
    VAR_4 = (VAR_4 + VAR_0 ) & ~VAR_0 ;
    VAR_5 = FUNC_1(VAR_4 * sizeof(*VAR_5), VAR_2, VAR_1 );
    if (VAR_5 == ((void*)0)) {
 FUNC_3("dummynet: heap_init, resize %d failed\n", VAR_4 );
 return 1 ;
    }
    if (VAR_3->size > 0) {
 FUNC_2(VAR_3->p, VAR_5, VAR_3->size * sizeof(*VAR_5) );
 FUNC_0(VAR_3->p, VAR_2);
    }
    VAR_3->p = VAR_5 ;
    VAR_3->size = VAR_4 ;
    return 0 ;
}
