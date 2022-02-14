
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ db; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct ocrdma_dev *VAR_7, u16 VAR_8, bool VAR_9,
         bool VAR_10, u16 VAR_11)
{
 u32 VAR_12 = VAR_8 & VAR_5;

 VAR_12 |= ((VAR_8 & VAR_3) <<
      VAR_4);

 if (VAR_9)
  VAR_12 |= (1 << VAR_2);
 if (VAR_10)
  VAR_12 |= (1 << VAR_6);
 VAR_12 |= (VAR_11 << VAR_0);
 FUNC_0(VAR_12, VAR_7->nic_info.db + VAR_1);
}
