
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct config_param {int mc_start_offset; int max_mc_addr; } ;
struct s2io_nic {struct config_param config; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct s2io_nic*,int,int) ;
 int FUNC_2 (struct s2io_nic*,int,int) ;
 int FUNC_3 (struct s2io_nic*,int) ;

__attribute__((used)) static int FUNC_4(struct s2io_nic *VAR_5, u8 *VAR_6)
{
 int VAR_7;
 u64 VAR_8 = 0;
 struct config_param *VAR_9 = &VAR_5->config;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_8 <<= 8;
  VAR_8 |= VAR_6[VAR_7];
 }
 if ((0ULL == VAR_8) || (VAR_8 == VAR_3))
  return VAR_4;


 for (VAR_7 = VAR_9->mc_start_offset; VAR_7 < VAR_9->max_mc_addr; VAR_7++) {
  u64 VAR_10;
  VAR_10 = FUNC_3(VAR_5, VAR_7);
  if (VAR_10 == VAR_3)
   break;

  if (VAR_10 == VAR_8)
   return VAR_4;
 }
 if (VAR_7 == VAR_9->max_mc_addr) {
  FUNC_0(VAR_0,
     "CAM full no space left for multicast MAC\n");
  return VAR_2;
 }

 FUNC_2(VAR_5, VAR_7, VAR_8);

 return FUNC_1(VAR_5, VAR_8, VAR_7);
}
