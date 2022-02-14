
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_nic {int dummy; } ;
typedef int outbuf ;
typedef int inbuf ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct efx_nic*,int ,int *,int,int *,int,int *) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_6, unsigned int VAR_7)
{
 u8 VAR_8[VAR_2];
 u8 VAR_9[VAR_3];
 int VAR_10;

 FUNC_1(VAR_8, VAR_4, VAR_7);

 VAR_10 = FUNC_2(VAR_6, VAR_1, VAR_8, sizeof(VAR_8),
     VAR_9, sizeof(VAR_9), ((void*)0));
 if (VAR_10)
  return VAR_10;

 switch (FUNC_0(VAR_9, VAR_5)) {
 case 128:
 case 129:
  return 0;
 default:
  return -VAR_0;
 }
}
