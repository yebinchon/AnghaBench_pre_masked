
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_q_vector {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_q_vector** q_vector; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbe_adapter*,int,int ,int ) ;
 int FUNC_2 (struct ixgbe_q_vector*) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_1)
{
 struct ixgbe_q_vector *VAR_2 = VAR_1->q_vector[0];

 FUNC_2(VAR_2);

 FUNC_1(VAR_1, 0, 0, 0);
 FUNC_1(VAR_1, 1, 0, 0);

 FUNC_0(VAR_0, "Legacy interrupt IVAR setup done\n");
}
