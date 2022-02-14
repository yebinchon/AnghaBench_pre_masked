
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qib_ibport {int dummy; } ;
struct qib_devdata {unsigned int num_pports; TYPE_1__* pport; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct qib_ibport ibport_data; } ;


 int FUNC_0 (int) ;
 struct qib_devdata* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static inline struct qib_ibport *FUNC_2(struct ib_device *VAR_0, u8 VAR_1)
{
 struct qib_devdata *VAR_2 = FUNC_1(VAR_0);
 unsigned VAR_3 = VAR_1 - 1;

 FUNC_0(VAR_3 >= VAR_2->num_pports);
 return &VAR_2->pport[VAR_3].ibport_data;
}
