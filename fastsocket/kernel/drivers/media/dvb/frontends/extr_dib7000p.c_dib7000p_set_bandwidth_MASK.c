
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef scalar_t__ timf ;
struct TYPE_4__ {TYPE_1__* bw; } ;
struct dib7000p_state {int current_bandwidth; scalar_t__ timf; TYPE_2__ cfg; } ;
struct TYPE_3__ {int timf; } ;


 int FUNC_0 (struct dib7000p_state*,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dib7000p_state *VAR_0, u32 VAR_1)
{
 u32 VAR_2;


 VAR_0->current_bandwidth = VAR_1;

 if (VAR_0->timf == 0) {
  FUNC_1( "using default timf");
  VAR_2 = VAR_0->cfg.bw->timf;
 } else {
  FUNC_1( "using updated timf");
  VAR_2 = VAR_0->timf;
 }

 VAR_2 = VAR_2 * (VAR_1 / 50) / 160;

 FUNC_0(VAR_0, 23, (u16) ((VAR_2 >> 16) & 0xffff));
 FUNC_0(VAR_0, 24, (u16) ((VAR_2 ) & 0xffff));

 return 0;
}
