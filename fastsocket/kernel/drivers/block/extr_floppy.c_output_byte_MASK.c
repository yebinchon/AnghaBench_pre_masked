
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reset; } ;
struct TYPE_3__ {char data; int status; int jiffies; } ;


 int FUNC_0 (char*,char,int ,int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 size_t VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(char VAR_11)
{
 int VAR_12;

 if ((VAR_12 = FUNC_3()) < 0)
  return -1;
 if ((VAR_12 & (VAR_5 | VAR_3 | VAR_4)) == VAR_5) {
  FUNC_1(VAR_11, VAR_1);






  return 0;
 }
 VAR_0->reset = 1;
 if (!VAR_7) {
  FUNC_0("Unable to send byte %x to FDC. Fdc=%x Status=%x\n",
         VAR_11, VAR_6, VAR_12);
  FUNC_2();
 }
 return -1;
}
