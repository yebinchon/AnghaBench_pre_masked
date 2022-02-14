
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gscps2port {int addr; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct gscps2port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct gscps2port *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 u8 VAR_4;


 FUNC_3(&VAR_1->lock, VAR_3);
 FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_1->addr);
 if (VAR_2)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_2(VAR_4, VAR_1->addr);
 FUNC_4(&VAR_1->lock, VAR_3);
 FUNC_5(VAR_1->addr);
 FUNC_0(VAR_1);
}
