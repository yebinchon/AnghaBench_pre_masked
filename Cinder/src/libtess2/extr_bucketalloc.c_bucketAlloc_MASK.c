
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BucketAlloc {void* freelist; } ;


 int FUNC_0 (struct BucketAlloc*) ;
 void* FUNC_1 (struct BucketAlloc*) ;

void* FUNC_2( struct BucketAlloc *VAR_0 )
{
 void *VAR_1;


 if ( !VAR_0->freelist || !FUNC_1( VAR_0 ) )
 {
  if ( !FUNC_0( VAR_0 ) )
   return 0;
 }


 VAR_1 = VAR_0->freelist;
 VAR_0->freelist = FUNC_1( VAR_0 );

 return VAR_1;
}
