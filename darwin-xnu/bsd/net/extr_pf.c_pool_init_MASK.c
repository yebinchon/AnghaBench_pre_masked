
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {unsigned int pool_hiwat; unsigned int pool_limit; char const* pool_name; int * pool_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pool*,int) ;
 int * FUNC_1 (size_t,int,int ,char const*) ;
 int FUNC_2 (int *,int ,int ) ;

void
FUNC_3(struct pool *VAR_5, size_t VAR_6, unsigned int VAR_7, unsigned int VAR_8,
    int VAR_9, const char *VAR_10, void *VAR_11)
{
#pragma unused(align, ioff, flags, palloc)
 FUNC_0(VAR_5, sizeof (*VAR_5));
 VAR_5->pool_zone = FUNC_1(VAR_6, 1024 * VAR_6, VAR_1, VAR_10);
 if (VAR_5->pool_zone != ((void*)0)) {
  FUNC_2(VAR_5->pool_zone, VAR_4, VAR_2);
  FUNC_2(VAR_5->pool_zone, VAR_3, VAR_0);
  VAR_5->pool_hiwat = VAR_5->pool_limit = (unsigned int)-1;
  VAR_5->pool_name = VAR_10;
 }
}
