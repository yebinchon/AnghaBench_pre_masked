
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct BucketAlloc {int itemSize; int bucketSize; void* freelist; TYPE_2__* buckets; TYPE_1__* alloc; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
struct TYPE_3__ {int userData; scalar_t__ (* memalloc ) (int ,size_t) ;} ;
typedef TYPE_2__ Bucket ;


 scalar_t__ FUNC_0 (int ,size_t) ;

__attribute__((used)) static int FUNC_1( struct BucketAlloc* VAR_0 )
{
 size_t VAR_1;
 Bucket* VAR_2;
 void* VAR_3;
 unsigned char* VAR_4;
 unsigned char* VAR_5;


 VAR_1 = sizeof(Bucket) + VAR_0->itemSize * VAR_0->bucketSize;
 VAR_2 = (Bucket*)VAR_0->alloc->memalloc( VAR_0->alloc->userData, VAR_1 );
 if ( !VAR_2 )
  return 0;
 VAR_2->next = 0;


 VAR_2->next = VAR_0->buckets;
 VAR_0->buckets = VAR_2;


 VAR_3 = VAR_0->freelist;
 VAR_4 = (unsigned char*)VAR_2 + sizeof(Bucket);
 VAR_5 = VAR_4 + VAR_0->itemSize * VAR_0->bucketSize;
 do
 {
  VAR_5 -= VAR_0->itemSize;

  *((void**)VAR_5) = VAR_3;

  VAR_3 = (void*)VAR_5;
 }
 while ( VAR_5 != VAR_4 );

 VAR_0->freelist = (void*)VAR_5;

 return 1;
}
