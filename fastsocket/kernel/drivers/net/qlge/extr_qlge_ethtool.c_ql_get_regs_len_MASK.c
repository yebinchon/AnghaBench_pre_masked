
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_reg_dump {int dummy; } ;
struct ql_mpi_coredump {int dummy; } ;
struct ql_adapter {int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct ql_adapter *VAR_2 = FUNC_0(VAR_1);

 if (!FUNC_1(VAR_0, &VAR_2->flags))
  return sizeof(struct ql_mpi_coredump);
 else
  return sizeof(struct ql_reg_dump);
}
