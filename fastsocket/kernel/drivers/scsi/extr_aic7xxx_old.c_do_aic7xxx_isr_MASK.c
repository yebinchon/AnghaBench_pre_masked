
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aic7xxx_host {TYPE_1__* host; int flags; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aic7xxx_host*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct aic7xxx_host*) ;
 int FUNC_3 (struct aic7xxx_host*,int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t
FUNC_6(int VAR_5, void *VAR_6)
{
  unsigned long VAR_7;
  struct aic7xxx_host *VAR_8;

  VAR_8 = VAR_6;
  if(!VAR_8)
    return VAR_4;
  FUNC_4(VAR_8->host->host_lock, VAR_7);
  VAR_8->flags |= VAR_0;
  do
  {
    FUNC_1(VAR_6);
  } while ( (FUNC_3(VAR_8, VAR_1) & VAR_2) );
  FUNC_0(VAR_8);
  FUNC_2(VAR_8);
  VAR_8->flags &= ~VAR_0;
  FUNC_5(VAR_8->host->host_lock, VAR_7);

  return VAR_3;
}
