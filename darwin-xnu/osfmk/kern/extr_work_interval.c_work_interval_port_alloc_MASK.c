
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_interval {scalar_t__ wi_port; } ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_kobject_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int,scalar_t__,scalar_t__*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static ipc_port_t
FUNC_9(struct work_interval *VAR_2)
{
 ipc_port_t VAR_3 = FUNC_4();

 if (VAR_3 == VAR_1)
  FUNC_8("failed to allocate work interval port");

 FUNC_1(VAR_2->wi_port == VAR_1);

 FUNC_2(VAR_3);
 FUNC_3(VAR_3, (ipc_kobject_t)VAR_2,
                            VAR_0);

 ipc_port_t VAR_4 = FUNC_6(VAR_3);
 ipc_port_t VAR_5 = VAR_1;
 FUNC_7(VAR_3, 1, VAR_4, &VAR_5);


 FUNC_1(VAR_5 == VAR_1);


 ipc_port_t VAR_6 = FUNC_5(VAR_3);
 FUNC_1(FUNC_0(VAR_6));

 VAR_2->wi_port = VAR_3;

 return VAR_6;
}
