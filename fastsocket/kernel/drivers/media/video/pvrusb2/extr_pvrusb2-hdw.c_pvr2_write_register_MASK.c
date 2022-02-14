
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pvr2_hdw {int* cmd_buffer; int ctl_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int,int ) ;
 int FUNC_3 (struct pvr2_hdw*,int*,int,int*,int ) ;

int FUNC_4(struct pvr2_hdw *VAR_1, u16 VAR_2, u32 VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1->ctl_lock);

 VAR_1->cmd_buffer[0] = VAR_0;
 FUNC_2(VAR_1->cmd_buffer,1,VAR_3);
 VAR_1->cmd_buffer[5] = 0;
 VAR_1->cmd_buffer[6] = (VAR_2 >> 8) & 0xff;
 VAR_1->cmd_buffer[7] = VAR_2 & 0xff;


 VAR_4 = FUNC_3(VAR_1, VAR_1->cmd_buffer, 8, VAR_1->cmd_buffer, 0);

 FUNC_0(VAR_1->ctl_lock);

 return VAR_4;
}
