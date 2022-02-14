
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct qib_pportdata*,int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct qib_pportdata *VAR_3, int VAR_4, void *VAR_5)
{
 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_3, VAR_1, VAR_5);
  break;

 case 128:
  FUNC_0(VAR_3, VAR_2, VAR_5);
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
