
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct smsc911x_data {TYPE_1__ config; scalar_t__ ioaddr; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,unsigned int*,unsigned int) ;
 int FUNC_2 (struct smsc911x_data*,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4(struct smsc911x_data *VAR_4, unsigned int *VAR_5,
       unsigned int VAR_6)
{
 if (VAR_4->config.flags & VAR_1) {
  while (VAR_6--)
   *VAR_5++ = FUNC_3(FUNC_2(VAR_4, VAR_0));
  return;
 }

 if (VAR_4->config.flags & VAR_3) {
  FUNC_1(VAR_4->ioaddr + VAR_0, VAR_5, VAR_6);
  return;
 }

 if (VAR_4->config.flags & VAR_2) {
  while (VAR_6--)
   *VAR_5++ = FUNC_2(VAR_4, VAR_0);
  return;
 }

 FUNC_0();
}
