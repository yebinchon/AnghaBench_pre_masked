
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ioc3 {int dummy; } ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct ioc3 *VAR_0)
{
 u32 VAR_1;

        do {
                VAR_1 = FUNC_0();
        } while (!(VAR_1 & 2));

        return VAR_1 & 1;
}
