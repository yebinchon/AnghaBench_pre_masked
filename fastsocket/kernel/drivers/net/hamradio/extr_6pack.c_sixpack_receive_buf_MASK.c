
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct sixpack {TYPE_2__* dev; int flags; } ;
typedef int buf ;
struct TYPE_3__ {int rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (struct sixpack*,unsigned char*,int) ;
 struct sixpack* FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct sixpack*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_1,
 const unsigned char *VAR_2, char *VAR_3, int VAR_4)
{
 struct sixpack *VAR_5;
 unsigned char VAR_6[512];
 int VAR_7;

 if (!VAR_4)
  return;

 VAR_5 = FUNC_2(VAR_1);
 if (!VAR_5)
  return;

 FUNC_0(VAR_6, VAR_2, VAR_4 < sizeof(VAR_6) ? VAR_4 : sizeof(VAR_6));



 VAR_7 = VAR_4;
 while (VAR_4) {
  VAR_4--;
  if (VAR_3 && *VAR_3++) {
   if (!FUNC_4(VAR_0, &VAR_5->flags))
    VAR_5->dev->stats.rx_errors++;
   continue;
  }
 }
 FUNC_1(VAR_5, VAR_6, VAR_7);

 FUNC_3(VAR_5);
 FUNC_5(VAR_1);
}
