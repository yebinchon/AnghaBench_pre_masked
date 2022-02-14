
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page_collect {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct page_collect*,int,int ) ;
 int FUNC_2 (struct page_collect*) ;
 int FUNC_3 (struct page*,int *,struct page_collect*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_0, struct writeback_control *VAR_1)
{
 struct page_collect VAR_2;
 int VAR_3;

 FUNC_1(&VAR_2, 1, VAR_0->mapping->host);

 VAR_3 = FUNC_3(VAR_0, ((void*)0), &VAR_2);
 if (VAR_3) {
  FUNC_0("exofs_writepage => %d\n", VAR_3);
  return VAR_3;
 }

 return FUNC_2(&VAR_2);
}
