
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad {int dummy; } ;



__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = sizeof(struct ib_mad) - VAR_0;
 if (VAR_1 && VAR_2) {
  VAR_3 = VAR_2 - VAR_1 % VAR_2;
  return VAR_3 == VAR_2 ? 0 : VAR_3;
 } else
  return VAR_2;
}
