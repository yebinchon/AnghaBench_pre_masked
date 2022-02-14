
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct adapter {int open_device_map; } ;


 int VAR_0 ;
 struct adapter* FUNC_0 (struct t3cdev*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct t3cdev *VAR_1)
{
 const struct adapter *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_0, &VAR_2->open_device_map);
}
