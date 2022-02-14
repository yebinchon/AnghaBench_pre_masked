
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_3__ {int status; scalar_t__ c; } ;
struct TYPE_4__ {TYPE_1__ bits; int as_long; } ;
typedef TYPE_2__ srmcons_result ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty_struct*,char,int ) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static int
FUNC_3(struct tty_struct *VAR_0)
{
 srmcons_result VAR_1;
 int VAR_2 = 0, VAR_3 = 0;

 do {
  VAR_1.as_long = FUNC_0(0);
  if (VAR_1.bits.status < 2) {
   FUNC_1(VAR_0, (char)VAR_1.bits.c, 0);
   VAR_2++;
  }
 } while((VAR_1.bits.status & 1) && (++VAR_3 < 10));

 if (VAR_2)
  FUNC_2(VAR_0);

 return VAR_2;
}
