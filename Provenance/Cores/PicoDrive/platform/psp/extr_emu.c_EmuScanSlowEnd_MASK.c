
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* reg; } ;
struct TYPE_4__ {scalar_t__ dirtyPal; } ;
struct TYPE_6__ {TYPE_2__ video; TYPE_1__ m; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,scalar_t__,int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_5)
{
 if (VAR_1.m.dirtyPal) {
  if (!VAR_3) {
   FUNC_2(VAR_5);
   VAR_3 = 3;
  }
  FUNC_1(1, 1);
 }

 if (VAR_3) {
  int VAR_6 = (VAR_1.video.reg[12]&1) ? 320 : 256;
  void *VAR_7 = (char *)VAR_2 + 512*240 + 512*2*VAR_5;
  FUNC_0(VAR_7, VAR_0 + 8, VAR_4, VAR_6);
 }

 return 0;
}
