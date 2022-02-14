
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1 (unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_3 & 3;

 VAR_2[VAR_4].data = VAR_3 | 0x80000000;
 FUNC_0(VAR_2 + VAR_4, VAR_1 + 3*VAR_0);
}
