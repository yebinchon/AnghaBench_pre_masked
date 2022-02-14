
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_lm70llp {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct spi_lm70llp *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_1->port);
 FUNC_1(VAR_1->port, VAR_2 & ~VAR_0);
}
