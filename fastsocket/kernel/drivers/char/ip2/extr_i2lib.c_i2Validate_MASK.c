
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_3__ {int validity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int
FUNC_0 ( i2ChanStrPtr VAR_3 )
{


 return ((VAR_3->validity & (VAR_1 | VAR_2))
     == (VAR_0 | VAR_2));
}
