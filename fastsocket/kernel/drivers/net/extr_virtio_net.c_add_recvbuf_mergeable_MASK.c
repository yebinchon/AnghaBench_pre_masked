
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int rvq; } ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (struct virtnet_info*,int ) ;
 int FUNC_1 (struct virtnet_info*,struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct scatterlist*,int ,int ) ;
 int FUNC_4 (int ,struct scatterlist*,int ,int,struct page*) ;

__attribute__((used)) static int FUNC_5(struct virtnet_info *VAR_2, gfp_t VAR_3)
{
 struct page *VAR_4;
 struct scatterlist VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_5, FUNC_2(VAR_4), VAR_1);

 VAR_6 = FUNC_4(VAR_2->rvq, &VAR_5, 0, 1, VAR_4);
 if (VAR_6 < 0)
  FUNC_1(VAR_2, VAR_4);

 return VAR_6;
}
