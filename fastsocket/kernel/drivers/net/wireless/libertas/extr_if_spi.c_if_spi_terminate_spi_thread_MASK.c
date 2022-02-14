
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_spi_card {int spi_thread_terminated; int spi_ready; scalar_t__ run_thread; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct if_spi_card *VAR_0)
{


 VAR_0->run_thread = 0;
 FUNC_1(&VAR_0->spi_ready);
 FUNC_0(&VAR_0->spi_thread_terminated);
}
