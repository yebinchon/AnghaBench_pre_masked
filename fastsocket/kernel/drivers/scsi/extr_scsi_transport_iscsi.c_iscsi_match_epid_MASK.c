
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct iscsi_endpoint {scalar_t__ id; } ;
struct device {int dummy; } ;


 struct iscsi_endpoint* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct iscsi_endpoint *VAR_2 = FUNC_0(VAR_0);
 uint64_t *VAR_3 = (uint64_t *) VAR_1;

 return *VAR_3 == VAR_2->id;
}
