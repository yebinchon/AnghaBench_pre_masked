
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MultiConnection {int remoteTransaction; } ;
typedef int RemoteTransaction ;


 int FUNC_0 (int *,int ,int) ;

void
FUNC_1(struct MultiConnection *VAR_0)
{
 RemoteTransaction *VAR_1 = &VAR_0->remoteTransaction;


 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
}
