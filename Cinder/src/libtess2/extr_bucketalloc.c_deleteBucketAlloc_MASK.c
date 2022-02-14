
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct BucketAlloc {struct BucketAlloc* buckets; scalar_t__ freelist; struct BucketAlloc* next; TYPE_1__* alloc; } ;
struct TYPE_2__ {int userData; int (* memfree ) (int ,struct BucketAlloc*) ;} ;
typedef TYPE_1__ TESSalloc ;
typedef struct BucketAlloc Bucket ;


 int FUNC_0 (int ,struct BucketAlloc*) ;
 int FUNC_1 (int ,struct BucketAlloc*) ;

void FUNC_2( struct BucketAlloc *VAR_0 )
{
 TESSalloc* VAR_1 = VAR_0->alloc;
 Bucket *VAR_2 = VAR_0->buckets;
 Bucket *VAR_3;
 while ( VAR_2 )
 {
  VAR_3 = VAR_2->next;
  VAR_1->memfree( VAR_1->userData, VAR_2 );
  VAR_2 = VAR_3;
 }
 VAR_0->freelist = 0;
 VAR_0->buckets = 0;
 VAR_1->memfree( VAR_1->userData, VAR_0 );
}
