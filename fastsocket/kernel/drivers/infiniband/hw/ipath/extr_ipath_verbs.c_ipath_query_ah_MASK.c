
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ah_attr {int static_rate; } ;
struct ipath_ah {struct ib_ah_attr attr; } ;
struct ib_ah {int dummy; } ;


 int FUNC_0 (int ) ;
 struct ipath_ah* FUNC_1 (struct ib_ah*) ;

__attribute__((used)) static int FUNC_2(struct ib_ah *VAR_0, struct ib_ah_attr *VAR_1)
{
 struct ipath_ah *VAR_2 = FUNC_1(VAR_0);

 *VAR_1 = VAR_2->attr;
 VAR_1->static_rate = FUNC_0(VAR_2->attr.static_rate);

 return 0;
}
