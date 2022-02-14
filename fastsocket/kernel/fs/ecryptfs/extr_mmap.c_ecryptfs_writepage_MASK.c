
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {int index; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_1, struct writeback_control *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_0, "Error encrypting "
    "page (upper index [0x%.16x])\n", VAR_1->index);
  FUNC_0(VAR_1);
  goto out;
 }
 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
out:
 return VAR_3;
}
