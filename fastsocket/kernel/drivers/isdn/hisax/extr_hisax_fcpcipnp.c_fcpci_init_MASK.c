
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fritz_adapter {int irq; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct fritz_adapter *VAR_6)
{
 FUNC_1(VAR_1 | VAR_3 |
      VAR_2, VAR_6->io + VAR_0);

 FUNC_1(VAR_5 | VAR_6->irq,
      VAR_6->io + VAR_4);
 FUNC_0(10);
}
