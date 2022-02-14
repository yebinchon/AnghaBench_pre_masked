
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehca_top_bmap {int dummy; } ;
struct ehca_bmap {int * top; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static inline int FUNC_4(struct ehca_bmap *VAR_3, int VAR_4, int VAR_5)
{
 if (!FUNC_0(VAR_3->top[VAR_4])) {
  VAR_3->top[VAR_4] =
   FUNC_2(sizeof(struct ehca_top_bmap), VAR_2);
  if (!VAR_3->top[VAR_4])
   return -VAR_1;

  FUNC_3(VAR_3->top[VAR_4], 0xFF, VAR_0);
 }
 return FUNC_1(VAR_3->top[VAR_4], VAR_5);
}
