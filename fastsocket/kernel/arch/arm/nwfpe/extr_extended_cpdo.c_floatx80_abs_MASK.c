
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct roundingData {int dummy; } ;
struct TYPE_4__ {int high; } ;
typedef TYPE_1__ floatx80 ;



__attribute__((used)) static floatx80 FUNC_0(struct roundingData *VAR_0, floatx80 VAR_1)
{
 VAR_1.high &= 0x7fff;
 return VAR_1;
}
