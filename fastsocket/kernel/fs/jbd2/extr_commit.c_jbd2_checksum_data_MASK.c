
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {int b_size; int b_data; struct page* b_page; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ) ;
 char* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static __u32 FUNC_4(__u32 VAR_1, struct buffer_head *VAR_2)
{
 struct page *VAR_3 = VAR_2->b_page;
 char *VAR_4;
 __u32 VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 VAR_5 = FUNC_0(VAR_1,
  (void *)(VAR_4 + FUNC_3(VAR_2->b_data)), VAR_2->b_size);
 FUNC_2(VAR_4, VAR_0);

 return VAR_5;
}
