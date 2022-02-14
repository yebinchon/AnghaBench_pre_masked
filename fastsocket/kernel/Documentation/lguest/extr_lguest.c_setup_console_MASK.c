
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termios {int c_lflag; } ;
struct device {scalar_t__ priv; } ;
struct console_abort {scalar_t__ count; } ;
struct TYPE_2__ {int device_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 struct device* FUNC_2 (char*,int ) ;
 struct termios VAR_10 ;
 scalar_t__ FUNC_3 (int ,struct termios*) ;
 int FUNC_4 (int ,int ,struct termios*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 struct device *VAR_11;


 if (FUNC_3(VAR_3, &VAR_10) == 0) {
  struct termios VAR_12 = VAR_10;




  VAR_12.c_lflag &= ~(VAR_2|VAR_1|VAR_0);
  FUNC_4(VAR_3, VAR_4, &VAR_12);
 }

 VAR_11 = FUNC_2("console", VAR_5);


 VAR_11->priv = FUNC_1(sizeof(struct console_abort));
 ((struct console_abort *)VAR_11->priv)->count = 0;







 FUNC_0(VAR_11, VAR_6, VAR_7);
 FUNC_0(VAR_11, VAR_6, VAR_8);

 FUNC_5("device %u: console\n", ++VAR_9.device_num);
}
