
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {struct fritz_adapter* priv; } ;
struct fritz_adapter {int hw_lock; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct isac *VAR_3, unsigned char * VAR_4,
      int VAR_5)
{
 struct fritz_adapter *VAR_6 = VAR_3->priv;
 unsigned long VAR_7;

 FUNC_2(&VAR_6->hw_lock, VAR_7);
 FUNC_0(VAR_1, VAR_6->io + VAR_2);
 FUNC_1(VAR_6->io + VAR_0, VAR_4, VAR_5);
  FUNC_3(&VAR_6->hw_lock, VAR_7);
}
