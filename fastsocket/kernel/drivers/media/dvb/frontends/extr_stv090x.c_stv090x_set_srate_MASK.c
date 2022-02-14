
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {TYPE_1__* internal; } ;
struct TYPE_2__ {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct stv090x_state*,int ,int) ;
 int FUNC_1 (int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct stv090x_state *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 if (VAR_4 > 60000000) {
  VAR_5 = (VAR_4 << 4);
  VAR_5 /= (VAR_3->internal->mclk >> 12);
 } else if (VAR_4 > 6000000) {
  VAR_5 = (VAR_4 << 6);
  VAR_5 /= (VAR_3->internal->mclk >> 10);
 } else {
  VAR_5 = (VAR_4 << 9);
  VAR_5 /= (VAR_3->internal->mclk >> 7);
 }

 if (FUNC_0(VAR_3, VAR_2, (VAR_5 >> 8) & 0x7f) < 0)
  goto err;
 if (FUNC_0(VAR_3, VAR_1, (VAR_5 & 0xff)) < 0)
  goto err;

 return 0;
err:
 FUNC_1(VAR_0, 1, "I/O error");
 return -1;
}
