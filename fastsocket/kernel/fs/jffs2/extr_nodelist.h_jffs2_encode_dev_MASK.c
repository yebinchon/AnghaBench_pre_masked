
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union jffs2_device_node {int new; int old; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(union jffs2_device_node *VAR_0, dev_t VAR_1)
{
 if (FUNC_4(VAR_1)) {
  VAR_0->old = FUNC_0(FUNC_3(VAR_1));
  return sizeof(VAR_0->old);
 } else {
  VAR_0->new = FUNC_1(FUNC_2(VAR_1));
  return sizeof(VAR_0->new);
 }
}
