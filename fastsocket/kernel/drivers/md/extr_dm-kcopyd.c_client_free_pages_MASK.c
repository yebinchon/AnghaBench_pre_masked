
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_kcopyd_client {scalar_t__ nr_free_pages; scalar_t__ nr_reserved_pages; int * pages; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dm_kcopyd_client *VAR_0)
{
 FUNC_0(VAR_0->nr_free_pages != VAR_0->nr_reserved_pages);
 FUNC_1(VAR_0->pages);
 VAR_0->pages = ((void*)0);
 VAR_0->nr_free_pages = VAR_0->nr_reserved_pages = 0;
}
