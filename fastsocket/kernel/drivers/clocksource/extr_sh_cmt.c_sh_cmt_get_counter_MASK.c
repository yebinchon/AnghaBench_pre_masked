
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_priv {int overflow_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_cmt_priv*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned long FUNC_2(struct sh_cmt_priv *VAR_2,
     int *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_2, VAR_1) & VAR_2->overflow_bit;


 do {
  VAR_8 = VAR_7;
  VAR_4 = FUNC_0(VAR_2, VAR_0);
  VAR_5 = FUNC_0(VAR_2, VAR_0);
  VAR_6 = FUNC_0(VAR_2, VAR_0);
  VAR_7 = FUNC_0(VAR_2, VAR_1) & VAR_2->overflow_bit;
 } while (FUNC_1((VAR_7 != VAR_8) || (VAR_4 > VAR_5 && VAR_4 < VAR_6)
     || (VAR_5 > VAR_6 && VAR_5 < VAR_4) || (VAR_6 > VAR_4 && VAR_6 < VAR_5)));

 *VAR_3 = VAR_7;
 return VAR_5;
}
