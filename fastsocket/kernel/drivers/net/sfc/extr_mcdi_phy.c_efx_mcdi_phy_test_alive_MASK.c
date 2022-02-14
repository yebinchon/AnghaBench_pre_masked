
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_nic {int dummy; } ;
typedef int outbuf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct efx_nic*,int ,int *,int ,int *,int,size_t*) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_7)
{
 u8 VAR_8[VAR_5];
 size_t VAR_9;
 int VAR_10;

 FUNC_0(VAR_4 != 0);

 VAR_10 = FUNC_2(VAR_7, VAR_3, ((void*)0), 0,
     VAR_8, sizeof(VAR_8), &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 < VAR_5)
  return -VAR_1;
 if (FUNC_1(VAR_8, VAR_2) != VAR_6)
  return -VAR_0;

 return 0;
}
