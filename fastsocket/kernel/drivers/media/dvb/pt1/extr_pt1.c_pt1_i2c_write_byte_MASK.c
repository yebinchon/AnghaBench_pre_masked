
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1 {int dummy; } ;


 int FUNC_0 (struct pt1*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct pt1 *VAR_0, int VAR_1, int *VAR_2, int VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  FUNC_0(VAR_0, VAR_1, &VAR_1, VAR_3 >> (7 - VAR_4) & 1);
 FUNC_0(VAR_0, VAR_1, &VAR_1, 1);
 *VAR_2 = VAR_1;
}
