
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {struct fritz_adapter* priv; } ;
struct fritz_adapter {int hw_lock; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct isac *VAR_2, unsigned char * VAR_3,
      int VAR_4)
{
 struct fritz_adapter *VAR_5 = VAR_2->priv;
 int VAR_6;
 unsigned long VAR_7;

 FUNC_2(&VAR_5->hw_lock, VAR_7);
 FUNC_1(0, VAR_5->io + VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  VAR_3[VAR_6] = FUNC_0(VAR_5->io + VAR_0);
  FUNC_3(&VAR_5->hw_lock, VAR_7);
}
