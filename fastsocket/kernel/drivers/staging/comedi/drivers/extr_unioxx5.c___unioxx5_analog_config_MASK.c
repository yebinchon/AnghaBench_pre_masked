
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unioxx5_subd_priv {int* usp_prev_cn_val; scalar_t__ usp_iobase; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct unioxx5_subd_priv *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 VAR_4 = VAR_0->usp_prev_cn_val[VAR_5 - 1];
 VAR_2 = VAR_3 = 1;


 if (VAR_1 % 2 == 0) {
  VAR_2 <<= VAR_1 & 0x07;
  VAR_3 <<= (VAR_1 + 1) & 0x07;
 } else {
  VAR_2 <<= (VAR_1 - 1) & 0x07;
  VAR_3 <<= VAR_1 & 0x07;
 }

 VAR_4 |= VAR_2;
 VAR_4 &= ~VAR_3;

 FUNC_1(1, VAR_0->usp_iobase + 0);
 FUNC_1(VAR_4, VAR_0->usp_iobase + VAR_5);
 FUNC_1(0, VAR_0->usp_iobase + 0);

 VAR_0->usp_prev_cn_val[VAR_5 - 1] = VAR_4;
}
