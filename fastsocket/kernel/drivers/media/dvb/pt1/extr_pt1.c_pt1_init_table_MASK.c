
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt1_table_page {int * buf_pfns; } ;
struct pt1_table {int * bufs; int addr; struct pt1_table_page* page; } ;
struct pt1 {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct pt1_table_page* FUNC_1 (struct pt1*,int *,int *) ;
 int FUNC_2 (struct pt1*,int *) ;
 int FUNC_3 (struct pt1*,struct pt1_table_page*,int ) ;
 int FUNC_4 (struct pt1*) ;
 int FUNC_5 (struct pt1*,int *,int *) ;

__attribute__((used)) static int
FUNC_6(struct pt1 *VAR_2, struct pt1_table *VAR_3, u32 *VAR_4)
{
 struct pt1_table_page *VAR_5;
 dma_addr_t VAR_6;
 int VAR_7, VAR_8;
 u32 VAR_9;

 VAR_5 = FUNC_1(VAR_2, &VAR_6, VAR_4);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_8 = FUNC_5(VAR_2, &VAR_3->bufs[VAR_7], &VAR_9);
  if (VAR_8 < 0)
   goto err;

  VAR_5->buf_pfns[VAR_7] = FUNC_0(VAR_9);
 }

 FUNC_4(VAR_2);
 VAR_3->page = VAR_5;
 VAR_3->addr = VAR_6;
 return 0;

err:
 while (VAR_7--)
  FUNC_2(VAR_2, &VAR_3->bufs[VAR_7]);

 FUNC_3(VAR_2, VAR_5, VAR_6);
 return VAR_8;
}
