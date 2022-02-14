
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {scalar_t__ link; int dev; } ;
struct port {struct slave* slave; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct slave*) ;

__attribute__((used)) static inline void FUNC_2(struct port *VAR_1)
{
 struct slave *VAR_2 = VAR_1->slave;

 if ((VAR_2->link == VAR_0) && FUNC_0(VAR_2->dev)) {
  FUNC_1(VAR_2);
 }
}
