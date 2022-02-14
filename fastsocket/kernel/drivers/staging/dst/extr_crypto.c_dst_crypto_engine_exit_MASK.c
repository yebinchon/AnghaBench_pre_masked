
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_crypto_engine {int data; scalar_t__ cipher; scalar_t__ hash; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dst_crypto_engine*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct dst_crypto_engine *VAR_0)
{
 if (VAR_0->hash)
  FUNC_1(VAR_0->hash);
 if (VAR_0->cipher)
  FUNC_0(VAR_0->cipher);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0->data);
}
