
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* update_lna ) (int *,int ) ;} ;
struct dib7000m_state {int demod; TYPE_1__ cfg; } ;


 int FUNC_0 (struct dib7000m_state*,int) ;
 int FUNC_1 (struct dib7000m_state*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct dib7000m_state *VAR_0)
{
 u16 VAR_1;

 if (VAR_0->cfg.update_lna) {

  VAR_1 = FUNC_0(VAR_0, 390);

  if (VAR_0->cfg.update_lna(&VAR_0->demod,VAR_1)) {
   FUNC_1(VAR_0);
   return 1;
  }
 }
 return 0;
}
