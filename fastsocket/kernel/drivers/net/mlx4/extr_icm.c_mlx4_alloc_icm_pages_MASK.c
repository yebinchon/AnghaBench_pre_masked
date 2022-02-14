
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ,int) ;
 int FUNC_1 (struct scatterlist*,struct page*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct scatterlist *VAR_2, int VAR_3, gfp_t VAR_4)
{
 struct page *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_5, VAR_1 << VAR_3, 0);
 return 0;
}
