
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fritz_adapter {int hw_lock; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_4(struct fritz_adapter *VAR_5, int VAR_6)
{
 u32 VAR_7;
 int VAR_8 = VAR_6 ? VAR_2 : VAR_1;
 unsigned long VAR_9;

 FUNC_2(&VAR_5->hw_lock, VAR_9);
 FUNC_1(VAR_8, VAR_5->io + VAR_3);
 VAR_7 = FUNC_0(VAR_5->io + VAR_0 + VAR_4);
 FUNC_3(&VAR_5->hw_lock, VAR_9);
 return VAR_7;
}
