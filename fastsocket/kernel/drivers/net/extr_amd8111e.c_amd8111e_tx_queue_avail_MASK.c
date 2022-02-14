
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd8111e_priv {int tx_idx; scalar_t__* tx_skbuff; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct amd8111e_priv* VAR_1 )
{
 int VAR_2 = VAR_1->tx_idx & VAR_0;
 if (VAR_1->tx_skbuff[VAR_2])
  return -1;
 else
  return 0;

}
