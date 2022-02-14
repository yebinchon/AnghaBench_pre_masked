
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct smsc911x_data {int ioaddr; int dev_lock; TYPE_1__ config; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static inline void FUNC_5(struct smsc911x_data *VAR_2, u32 VAR_3,
          u32 VAR_4)
{
 if (VAR_2->config.flags & VAR_1) {
  FUNC_3(VAR_4, VAR_2->ioaddr + VAR_3);
  return;
 }

 if (VAR_2->config.flags & VAR_0) {
  unsigned long VAR_5;




  FUNC_1(&VAR_2->dev_lock, VAR_5);
  FUNC_4(VAR_4 & 0xFFFF, VAR_2->ioaddr + VAR_3);
  FUNC_4((VAR_4 >> 16) & 0xFFFF, VAR_2->ioaddr + VAR_3 + 2);
  FUNC_2(&VAR_2->dev_lock, VAR_5);
  return;
 }

 FUNC_0();
}
