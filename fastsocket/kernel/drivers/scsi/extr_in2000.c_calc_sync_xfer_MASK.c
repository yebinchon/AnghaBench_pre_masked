
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uchar ;
struct TYPE_2__ {unsigned int reg_value; } ;


 unsigned int VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static uchar FUNC_1(unsigned int VAR_2, unsigned int VAR_3)
{
 uchar VAR_4;

 VAR_2 *= 4;
 VAR_4 = VAR_1[FUNC_0(VAR_2)].reg_value;
 VAR_4 |= (VAR_3 < VAR_0) ? VAR_3 : VAR_0;
 return VAR_4;
}
