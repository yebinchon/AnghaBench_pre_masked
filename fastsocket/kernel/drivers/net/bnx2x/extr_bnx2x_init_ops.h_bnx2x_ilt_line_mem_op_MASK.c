
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ilt_line {int size; int page; int page_mapping; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_1,
     struct ilt_line *VAR_2, u32 VAR_3, u8 VAR_4)
{
 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_2->page, VAR_2->page_mapping, VAR_2->size);
  return 0;
 }
 FUNC_1(VAR_2->page, &VAR_2->page_mapping, VAR_3);
 if (!VAR_2->page)
  return -1;
 VAR_2->size = VAR_3;
 return 0;
}
