
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vp702x_fe_state {int status_check_interval; scalar_t__ next_status_check; int sig; int d; int snr; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct vp702x_fe_state *VAR_4)
{
 u8 VAR_5[10];
 if (FUNC_0(VAR_3,VAR_4->next_status_check)) {
  FUNC_1(VAR_4->d,VAR_1,0,0,VAR_5,10);

  VAR_4->lock = VAR_5[4];
  FUNC_1(VAR_4->d,VAR_2,0x11,0,&VAR_4->snr,1);
  FUNC_1(VAR_4->d,VAR_2,0x15,0,&VAR_4->sig,1);

  VAR_4->next_status_check = VAR_3 + (VAR_4->status_check_interval*VAR_0)/1000;
 }
 return 0;
}
