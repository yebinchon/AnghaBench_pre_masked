
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gscps2port {scalar_t__ append; scalar_t__ act; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gscps2port *VAR_1)
{
 while (FUNC_1(VAR_1->addr) & VAR_0)
  FUNC_0(VAR_1->addr);
 VAR_1->act = VAR_1->append = 0;
}
