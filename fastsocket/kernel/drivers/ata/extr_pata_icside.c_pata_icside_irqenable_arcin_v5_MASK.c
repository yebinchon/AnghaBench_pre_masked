
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pata_icside_state {scalar_t__ irq_port; } ;
struct expansion_card {struct pata_icside_state* irq_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1 (struct expansion_card *VAR_1, int VAR_2)
{
 struct pata_icside_state *VAR_3 = VAR_1->irq_data;

 FUNC_0(0, VAR_3->irq_port + VAR_0);
}
