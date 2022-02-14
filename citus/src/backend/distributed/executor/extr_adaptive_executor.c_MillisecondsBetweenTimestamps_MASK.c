
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;


 int FUNC_0 (int ,int ,long*,int*) ;

__attribute__((used)) static long
FUNC_1(TimestampTz VAR_0, TimestampTz VAR_1)
{
 long VAR_2 = 0;
 int VAR_3 = 0;

 FUNC_0(VAR_0, VAR_1, &VAR_2, &VAR_3);

 return VAR_2 * 1000 + VAR_3 / 1000;
}
