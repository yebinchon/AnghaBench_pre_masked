
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Print ) (int ,char*) ;} ;
struct TYPE_3__ {int numentities; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(int VAR_5)
{
 if (VAR_5 <= 0 || VAR_5 >= VAR_2.numentities)
 {
  VAR_1.Print(VAR_0, "bsp entity out of range\n");
  return VAR_3;
 }
 return VAR_4;
}
