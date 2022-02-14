
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_pinmux_bank {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 struct stmp3xxx_pinmux_bank* VAR_1 ;

__attribute__((used)) static inline struct stmp3xxx_pinmux_bank *
FUNC_3(unsigned VAR_2, unsigned *VAR_3, unsigned *VAR_4)
{
 unsigned VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = FUNC_2(VAR_2);
 FUNC_0(VAR_5 >= VAR_0);
 if (VAR_3)
  *VAR_3 = VAR_5;
 if (VAR_4)
  *VAR_4 = VAR_6;
 return &VAR_1[VAR_5];
}
