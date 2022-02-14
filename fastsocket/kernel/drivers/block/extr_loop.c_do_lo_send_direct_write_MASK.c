
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct loop_device {int lo_backing_file; } ;
struct bio_vec {int bv_page; int bv_len; scalar_t__ bv_offset; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct loop_device *VAR_0,
  struct bio_vec *VAR_1, loff_t VAR_2, struct page *VAR_3)
{
 ssize_t VAR_4 = FUNC_0(VAR_0->lo_backing_file,
   FUNC_2(VAR_1->bv_page) + VAR_1->bv_offset,
   VAR_1->bv_len, VAR_2);
 FUNC_3(VAR_1->bv_page);
 FUNC_1();
 return VAR_4;
}
