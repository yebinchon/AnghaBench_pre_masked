
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fritz_adapter {int hw_lock; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_4(struct fritz_adapter *VAR_6, int VAR_7)
{
 unsigned char VAR_8 = VAR_7 ? VAR_2 : VAR_1;
 u32 VAR_9;
 unsigned long VAR_10;

 FUNC_2(&VAR_6->hw_lock, VAR_10);
 FUNC_1(VAR_8, VAR_6->io + VAR_3);
 VAR_9 = FUNC_0(VAR_6->io + VAR_0 + VAR_5);
 if (VAR_9 & VAR_4)
  VAR_9 |= FUNC_0(VAR_6->io + VAR_0 + VAR_5 + 1) << 8;
 FUNC_3(&VAR_6->hw_lock, VAR_10);
 return VAR_9;
}
