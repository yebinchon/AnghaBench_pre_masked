
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ db; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_dev *VAR_8, u16 VAR_9,
         bool VAR_10, bool VAR_11, u16 VAR_12)
{
 u32 VAR_13 = 0;

 VAR_13 |= VAR_9 & VAR_4;
 VAR_13 |= ((VAR_9 & VAR_2) << VAR_3);
 if (VAR_10)
  VAR_13 |= (1 << VAR_7);
 if (VAR_11)
  VAR_13 |= (1 << VAR_1);
 VAR_13 |= (1 << VAR_5);
 VAR_13 |= (VAR_12 << VAR_6);
 FUNC_0(VAR_13, VAR_8->nic_info.db + VAR_0);
}
