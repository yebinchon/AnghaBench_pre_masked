
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int dummy; } ;
struct mmc_command {int* resp; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct wbsd_host*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct wbsd_host *VAR_8,
     struct mmc_command *VAR_9)
{



 if (FUNC_0(VAR_8, VAR_6) != VAR_7) {
  VAR_9->error = -VAR_0;
  return;
 }

 VAR_9->resp[0] = FUNC_0(VAR_8, VAR_1) << 24;
 VAR_9->resp[0] |= FUNC_0(VAR_8, VAR_2) << 16;
 VAR_9->resp[0] |= FUNC_0(VAR_8, VAR_3) << 8;
 VAR_9->resp[0] |= FUNC_0(VAR_8, VAR_4) << 0;
 VAR_9->resp[1] = FUNC_0(VAR_8, VAR_5) << 24;
}
