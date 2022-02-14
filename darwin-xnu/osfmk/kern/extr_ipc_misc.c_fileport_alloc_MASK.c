
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileglob {int dummy; } ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_kobject_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int,scalar_t__,scalar_t__*) ;
 int FUNC_7 (char*) ;

ipc_port_t
FUNC_8(struct fileglob *VAR_2)
{
 ipc_port_t VAR_3;
 ipc_port_t VAR_4;
 ipc_port_t VAR_5;

 VAR_3 = FUNC_3();
 if (VAR_3 == VAR_1) {
  goto out;
 }

 FUNC_2(VAR_3, (ipc_kobject_t)VAR_2, VAR_0);
 FUNC_1(VAR_3);
 VAR_5 = FUNC_5(VAR_3);
 FUNC_6(VAR_3, 1, VAR_5, &VAR_5);

 VAR_4 = FUNC_4(VAR_3);
 if (!FUNC_0(VAR_4)) {
  FUNC_7("Couldn't allocate send right for fileport!\n");
 }

out:
 return VAR_3;
}
