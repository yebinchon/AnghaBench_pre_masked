
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct ablkcipher_walk {scalar_t__ num; struct scatterlist* cache; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct scatterlist*,int) ;
 int FUNC_3 (struct scatterlist*,struct page*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ablkcipher_walk *VAR_2,
  int VAR_3, gfp_t VAR_4)
{
 int VAR_5;

 VAR_3 = FUNC_1(VAR_0, VAR_3);
 FUNC_2(VAR_2->cache, VAR_3);

 VAR_2->num = 0;
 for (VAR_5=0; VAR_5<VAR_3; ++VAR_5) {
  struct page *VAR_6 = FUNC_0(VAR_4);
  struct scatterlist *VAR_7;

  if (!VAR_6)
   break;

  VAR_7 = &VAR_2->cache[VAR_5];

  FUNC_3(VAR_7, VAR_6, VAR_1, 0);
  VAR_2->num++;
 }

 return VAR_5;
}
