
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct config_param {int max_mc_addr; } ;
struct s2io_nic {struct config_param config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct s2io_nic*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (struct s2io_nic*,int) ;

__attribute__((used)) static void FUNC_2(struct s2io_nic *VAR_2)
{
 int VAR_3;
 u64 VAR_4 = 0x0;
 struct config_param *VAR_5 = &VAR_2->config;


 for (VAR_3 = 0; VAR_3 < VAR_5->max_mc_addr; VAR_3++) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);

  if (VAR_4 == VAR_0)
   VAR_4 = VAR_1;
  FUNC_0(VAR_2, VAR_3, VAR_4);
 }
}
