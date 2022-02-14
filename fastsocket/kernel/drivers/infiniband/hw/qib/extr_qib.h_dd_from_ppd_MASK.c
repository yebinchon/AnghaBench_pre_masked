
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int dummy; } ;



__attribute__((used)) static inline struct qib_devdata *FUNC_0(struct qib_pportdata *VAR_0)
{
 return VAR_0->dd;
}
