
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {scalar_t__ pages; scalar_t__ inline_pages; scalar_t__ page_descs; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct fuse_req*) ;

void FUNC_2(struct fuse_req *VAR_1)
{
 if (VAR_1->pages != VAR_1->inline_pages) {
  FUNC_0(VAR_1->pages);
  FUNC_0(VAR_1->page_descs);
 }
 FUNC_1(VAR_0, VAR_1);
}
