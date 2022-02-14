
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stv090x_state {int search_range; TYPE_1__* internal; } ;
typedef int s32 ;
struct TYPE_2__ {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stv090x_state*,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int,char*) ;

__attribute__((used)) static int FUNC_3(struct stv090x_state *VAR_5)
{
 s32 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_5, VAR_3) << 8;
 VAR_6 |= FUNC_0(VAR_5, VAR_2);
 VAR_6 = FUNC_1(VAR_6, 16);

 VAR_7 = FUNC_0(VAR_5, VAR_1) << 8;
 VAR_7 |= FUNC_0(VAR_5, VAR_0);
 VAR_8 = VAR_5->search_range / 1000;

 VAR_8 += (VAR_8 / 10);
 VAR_8 = (65536 * VAR_8 / 2);
 VAR_8 /= VAR_5->internal->mclk / 1000;

 if (VAR_8 > 0x4000)
  VAR_8 = 0x4000;

 if ((VAR_7 > 0x2000) || (VAR_6 > 2 * VAR_8) || (VAR_6 < -2 * VAR_8)) {
  VAR_9 = 1;
  FUNC_2(VAR_4, 1, "No Signal");
 } else {
  VAR_9 = 0;
  FUNC_2(VAR_4, 1, "Found Signal");
 }

 return VAR_9;
}
