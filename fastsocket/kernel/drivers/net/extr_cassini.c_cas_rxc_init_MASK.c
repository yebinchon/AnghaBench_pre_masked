
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas_rx_comp {int word4; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cas_rx_comp*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct cas_rx_comp *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->word4 = FUNC_0(VAR_0);
}
