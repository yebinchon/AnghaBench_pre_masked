
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct bt856 {int* reg; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct bt856*,size_t,int) ;

__attribute__((used)) static inline int FUNC_1(struct bt856 *VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 return FUNC_0(VAR_1, VAR_2,
  (VAR_1->reg[VAR_2 - VAR_0] & ~(1 << VAR_3)) |
    (VAR_4 ? (1 << VAR_3) : 0));
}
