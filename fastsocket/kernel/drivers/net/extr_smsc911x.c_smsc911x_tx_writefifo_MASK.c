
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct smsc911x_data {TYPE_1__ config; scalar_t__ ioaddr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct smsc911x_data*,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,unsigned int*,unsigned int) ;

__attribute__((used)) static inline void
FUNC_4(struct smsc911x_data *VAR_4, unsigned int *VAR_5,
        unsigned int VAR_6)
{
 if (VAR_4->config.flags & VAR_0) {
  while (VAR_6--)
   FUNC_1(VAR_4, VAR_3, FUNC_2(*VAR_5++));
  return;
 }

 if (VAR_4->config.flags & VAR_2) {
  FUNC_3(VAR_4->ioaddr + VAR_3, VAR_5, VAR_6);
  return;
 }

 if (VAR_4->config.flags & VAR_1) {
  while (VAR_6--)
   FUNC_1(VAR_4, VAR_3, *VAR_5++);
  return;
 }

 FUNC_0();
}
