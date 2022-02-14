
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
typedef int Mpi2EventNotificationReply_t ;


 int * FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,int *) ;

u8
FUNC_2(struct MPT3SAS_ADAPTER *VAR_0, u8 VAR_1,
 u32 VAR_2)
{
 Mpi2EventNotificationReply_t *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_3);
 return 1;
}
