
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int*) ;

__attribute__((used)) static unsigned FUNC_2(u8 *VAR_0, int VAR_1)
{
 unsigned VAR_2 = 0;

 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0);

 for (; VAR_1 && FUNC_0(*VAR_0); ++VAR_0, --VAR_1)
  VAR_2 = (VAR_2 * 10) + (*VAR_0 - (unsigned) '0');

 return VAR_2;
}
