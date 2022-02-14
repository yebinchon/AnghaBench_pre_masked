
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int ,char*) ;

__attribute__((used)) static void FUNC_1(int VAR_3, struct irq_desc *VAR_4)
{
 VAR_4->status &= ~VAR_0;
 FUNC_0(VAR_3, &VAR_2, VAR_1,
          "edge");
}
