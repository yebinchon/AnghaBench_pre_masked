
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prism2_wep_data {scalar_t__ rx_tfm; scalar_t__ tx_tfm; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct prism2_wep_data *VAR_1 = VAR_0;

 if (VAR_1) {
                if (VAR_1->tx_tfm)
                        FUNC_0(VAR_1->tx_tfm);
                if (VAR_1->rx_tfm)
                        FUNC_0(VAR_1->rx_tfm);
        }
 FUNC_1(VAR_0);
}
