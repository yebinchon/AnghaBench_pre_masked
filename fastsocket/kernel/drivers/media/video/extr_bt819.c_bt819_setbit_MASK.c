
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct bt819 {int* reg; } ;


 int FUNC_0 (struct bt819*,size_t,int) ;

__attribute__((used)) static inline int FUNC_1(struct bt819 *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 return FUNC_0(VAR_0, VAR_1,
  (VAR_0->reg[VAR_1] & ~(1 << VAR_2)) | (VAR_3 ? (1 << VAR_2) : 0));
}
