
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {struct page* pages; } ;
struct page {scalar_t__ private; } ;
typedef int gfp_t ;


 struct page* FUNC_0 (int ) ;

__attribute__((used)) static struct page *FUNC_1(struct virtnet_info *VAR_0, gfp_t VAR_1)
{
 struct page *VAR_2 = VAR_0->pages;

 if (VAR_2) {
  VAR_0->pages = (struct page *)VAR_2->private;

  VAR_2->private = 0;
 } else
  VAR_2 = FUNC_0(VAR_1);
 return VAR_2;
}
