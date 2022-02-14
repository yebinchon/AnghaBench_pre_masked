
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct ismt_priv {int head; scalar_t__ smba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ismt_priv*) ;
 int FUNC_1 (struct ismt_priv*) ;
 int FUNC_2 (struct ismt_priv*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ismt_priv *VAR_4)
{
 uint VAR_5;
 uint VAR_6;

 FUNC_0(VAR_4);
 FUNC_1(VAR_4);
 FUNC_2(VAR_4);


 VAR_5 = ((VAR_4->head + 1) % VAR_0) << 16;
 VAR_6 = FUNC_3(VAR_4->smba + VAR_3);
 FUNC_4((VAR_6 & ~VAR_1) | VAR_5,
        VAR_4->smba + VAR_3);


 VAR_6 = FUNC_3(VAR_4->smba + VAR_3);
 FUNC_4(VAR_6 | VAR_2,
        VAR_4->smba + VAR_3);
}
