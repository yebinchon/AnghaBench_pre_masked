
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_collect {unsigned int length; int nr_pages; int bio; int req_q; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct page*,unsigned int,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct page_collect *VAR_1, struct page *VAR_2,
    unsigned VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1->req_q, VAR_1->bio, VAR_2, VAR_3, 0);
 if (FUNC_1(VAR_3 != VAR_4))
  return -VAR_0;

 ++VAR_1->nr_pages;
 VAR_1->length += VAR_3;
 return 0;
}
