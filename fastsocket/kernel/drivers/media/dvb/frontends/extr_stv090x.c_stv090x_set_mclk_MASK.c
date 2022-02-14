
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {TYPE_1__* internal; struct stv090x_config* config; } ;
struct stv090x_config {int xtal; } ;
struct TYPE_2__ {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (struct stv090x_state*) ;
 int FUNC_5 (struct stv090x_state*,int ) ;
 scalar_t__ FUNC_6 (struct stv090x_state*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct stv090x_state *VAR_7, u32 VAR_8, u32 VAR_9)
{
 const struct stv090x_config *VAR_10 = VAR_7->config;
 u32 VAR_11, VAR_12, VAR_13;

 VAR_11 = FUNC_5(VAR_7, VAR_6);
 VAR_13 = ((FUNC_0(VAR_11, VAR_4) == 1) ? 4 : 6);

 VAR_12 = ((VAR_13 * VAR_8) / VAR_10->xtal) - 1;

 VAR_11 = FUNC_5(VAR_7, VAR_5);
 FUNC_1(VAR_11, VAR_3, VAR_12);
 if (FUNC_6(VAR_7, VAR_5, VAR_11) < 0)
  goto err;

 VAR_7->internal->mclk = FUNC_4(VAR_7);


 VAR_12 = VAR_7->internal->mclk / 704000;
 if (FUNC_2(VAR_7, VAR_1, VAR_12) < 0)
  goto err;
 if (FUNC_2(VAR_7, VAR_0, VAR_12) < 0)
  goto err;

 return 0;
err:
 FUNC_3(VAR_2, 1, "I/O error");
 return -1;
}
