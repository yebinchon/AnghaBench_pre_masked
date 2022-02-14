
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riscom_board {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (unsigned short) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct riscom_board const *VAR_0, unsigned short VAR_1,
     unsigned char VAR_2)
{
 FUNC_1(VAR_2, VAR_0->base + FUNC_0(VAR_1));
}
