
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct efx_nic {TYPE_2__* ptp_data; } ;
typedef int inbuf ;
struct TYPE_4__ {int mode; TYPE_1__* channel; } ;
struct TYPE_3__ {int channel; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct efx_nic*,int ,int *,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_6)
{
 u8 VAR_7[VAR_1];

 FUNC_0(VAR_7, VAR_5, VAR_2);
 FUNC_0(VAR_7, VAR_4,
         VAR_6->ptp_data->channel->channel);
 FUNC_0(VAR_7, VAR_3, VAR_6->ptp_data->mode);

 return FUNC_1(VAR_6, VAR_0, VAR_7, sizeof(VAR_7),
       ((void*)0), 0, ((void*)0));
}
