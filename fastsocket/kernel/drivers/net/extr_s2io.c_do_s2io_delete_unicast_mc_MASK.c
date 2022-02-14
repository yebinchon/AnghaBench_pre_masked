
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct config_param {int max_mc_addr; } ;
struct s2io_nic {struct config_param config; } ;


 int FUNC_0 (int ,char*,unsigned long long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct s2io_nic*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct s2io_nic*,int) ;
 int FUNC_3 (struct s2io_nic*) ;

__attribute__((used)) static int FUNC_4(struct s2io_nic *VAR_4, u64 VAR_5)
{
 int VAR_6;
 u64 VAR_7 = VAR_2, VAR_8;
 struct config_param *VAR_9 = &VAR_4->config;

 for (VAR_6 = 1;
      VAR_6 < VAR_9->max_mc_addr; VAR_6++) {
  VAR_8 = FUNC_2(VAR_4, VAR_6);
  if (VAR_8 == VAR_5) {

   if (FUNC_1(VAR_4, VAR_7, VAR_6) == VAR_1)
    return VAR_1;

   FUNC_3(VAR_4);
   return VAR_3;
  }
 }
 FUNC_0(VAR_0, "MAC address 0x%llx not found in CAM\n",
    (unsigned long long)VAR_5);
 return VAR_1;
}
