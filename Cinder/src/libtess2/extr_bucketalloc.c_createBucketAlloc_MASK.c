
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct BucketAlloc {char const* name; unsigned int itemSize; unsigned int bucketSize; scalar_t__ buckets; scalar_t__ freelist; TYPE_1__* alloc; } ;
struct TYPE_3__ {int userData; int (* memfree ) (int ,struct BucketAlloc*) ;scalar_t__ (* memalloc ) (int ,int) ;} ;
typedef TYPE_1__ TESSalloc ;
typedef struct BucketAlloc BucketAlloc ;


 int FUNC_0 (struct BucketAlloc*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct BucketAlloc*) ;

struct BucketAlloc* FUNC_3( TESSalloc* VAR_0, const char* VAR_1,
           unsigned int VAR_2, unsigned int VAR_3 )
{
 BucketAlloc* VAR_4 = (BucketAlloc*)VAR_0->memalloc( VAR_0->userData, sizeof(BucketAlloc) );

 VAR_4->alloc = VAR_0;
 VAR_4->name = VAR_1;
 VAR_4->itemSize = VAR_2;
 if ( VAR_4->itemSize < sizeof(void*) )
  VAR_4->itemSize = sizeof(void*);
 VAR_4->bucketSize = VAR_3;
 VAR_4->freelist = 0;
 VAR_4->buckets = 0;

 if ( !FUNC_0( VAR_4 ) )
 {
  VAR_0->memfree( VAR_0->userData, VAR_4 );
  return 0;
 }

 return VAR_4;
}
