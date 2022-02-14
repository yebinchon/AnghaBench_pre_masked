
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hw_dma {int size; int mapping; int addr; } ;
struct bnx2x_ilt {TYPE_1__* lines; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int size; int page_mapping; int page; } ;


 int VAR_0 ;
 struct bnx2x_ilt* FUNC_0 (struct bnx2x*) ;
 struct hw_dma* FUNC_1 (struct bnx2x*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*) ;

int FUNC_3(struct bnx2x *VAR_2, u16 VAR_3)
{
 int VAR_4;
 struct bnx2x_ilt *VAR_5 = FUNC_0(VAR_2);

 if (!FUNC_2(VAR_2))
  return VAR_3;


 for (VAR_4 = 0; VAR_4 < VAR_0/VAR_1; VAR_4++) {
  struct hw_dma *VAR_6 = FUNC_1(VAR_2, VAR_4);

  VAR_5->lines[VAR_3+VAR_4].page = VAR_6->addr;
  VAR_5->lines[VAR_3+VAR_4].page_mapping = VAR_6->mapping;
  VAR_5->lines[VAR_3+VAR_4].size = VAR_6->size;
 }
 return VAR_3 + VAR_4;
}
