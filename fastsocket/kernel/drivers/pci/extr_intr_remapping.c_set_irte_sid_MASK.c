
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irte {unsigned int svt; unsigned int sq; unsigned int sid; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct irte *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, unsigned int VAR_5)
{
 if (VAR_1)
  VAR_3 = VAR_0;
 VAR_2->svt = VAR_3;
 VAR_2->sq = VAR_4;
 VAR_2->sid = VAR_5;
}
