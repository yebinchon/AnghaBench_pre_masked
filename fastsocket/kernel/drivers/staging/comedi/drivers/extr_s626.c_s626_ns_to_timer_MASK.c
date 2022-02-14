
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = 500;

 switch (VAR_1) {
 case 129:
 default:
  VAR_2 = (*VAR_0 + VAR_3 / 2) / VAR_3;
  break;
 case 130:
  VAR_2 = (*VAR_0) / VAR_3;
  break;
 case 128:
  VAR_2 = (*VAR_0 + VAR_3 - 1) / VAR_3;
  break;
 }

 *VAR_0 = VAR_3 * VAR_2;
 return VAR_2 - 1;
}
