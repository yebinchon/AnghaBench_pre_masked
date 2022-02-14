
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numareas; } ;
struct TYPE_3__ {int (* Print ) (int ,char*,int) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,char*,int) ;

void FUNC_2(void)
{
 int VAR_3, VAR_4;

 VAR_4 = 0;
 for (VAR_3 = 1; VAR_3 < VAR_1.numareas; VAR_3++)
 {
  VAR_4 += FUNC_0(VAR_3);
 }
 VAR_2.Print(VAR_0, "\r%6d possible portal areas\n", VAR_4);
}
