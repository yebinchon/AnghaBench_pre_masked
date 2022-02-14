
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (struct qib_devdata*,char*) ;
 int FUNC_2 (struct qib_pportdata*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct qib_pportdata *VAR_0, const char *VAR_1,
      size_t VAR_2)
{
 struct qib_devdata *VAR_3 = VAR_0->dd;
 int VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_0(VAR_1, 0, &VAR_5);
 if (VAR_4) {
  FUNC_1(VAR_3, "attempt to set invalid LED override\n");
  return VAR_4;
 }

 FUNC_2(VAR_0, VAR_5);
 return VAR_2;
}
