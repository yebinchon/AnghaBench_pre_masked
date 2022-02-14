
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct specialix_board {unsigned short reg; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;

__attribute__((used)) static inline unsigned char FUNC_2(struct specialix_board *VAR_2,
    unsigned short VAR_3)
{
 VAR_2->reg = VAR_3;
 FUNC_1(VAR_3, VAR_2->base + VAR_0);
 return FUNC_0(VAR_2->base + VAR_1);
}
