
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int l4_khz; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;


 VAR_3 = 1000000000 / (VAR_0.l4_khz) * VAR_2;

 VAR_4 = (VAR_1 + VAR_3 - 1) / VAR_3;

 return VAR_4;
}
