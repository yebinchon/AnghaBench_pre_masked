
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_port_private {int dummy; } ;
struct ib_device {int dummy; } ;


 struct ib_mad_port_private* FUNC_0 (struct ib_device*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline struct ib_mad_port_private *
FUNC_3(struct ib_device *VAR_1, int VAR_2)
{
 struct ib_mad_port_private *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_0, VAR_4);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_0, VAR_4);

 return VAR_3;
}
