
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,long*,int*) ;

__attribute__((used)) static long
FUNC_2(TimestampTz VAR_0)
{
 long VAR_1 = 0;
 int VAR_2 = 0;
 FUNC_1(FUNC_0(), VAR_0, &VAR_1, &VAR_2);
 return VAR_1 * 1000 + VAR_2 / 1000;
}
