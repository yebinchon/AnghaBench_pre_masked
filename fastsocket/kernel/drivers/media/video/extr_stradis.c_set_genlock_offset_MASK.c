
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct saa7146*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct saa7146 *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7 = 858;
 if (VAR_0 == VAR_1)
  VAR_7 = 864;
 if (VAR_5 > 500)
  VAR_5 = 500;
 else if (VAR_5 < -500)
  VAR_5 = -500;
 VAR_6 = VAR_5 + 0x100;
 if (VAR_6 == 1)
  VAR_6 = 0x401;
 else if (VAR_6 < 1)
  VAR_6 = 0x400 + VAR_7 + VAR_6;
 FUNC_0(VAR_4, VAR_3, VAR_2, VAR_6, 2);
}
