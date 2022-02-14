
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* reg; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_5)
{
 if ((VAR_5 & 3) != 3)
  return 0;
 FUNC_0(VAR_3, VAR_4, VAR_5 + 1,
  !(VAR_1.video.reg[12] & 1) && !(VAR_2 & VAR_0));
 return 0;
}
