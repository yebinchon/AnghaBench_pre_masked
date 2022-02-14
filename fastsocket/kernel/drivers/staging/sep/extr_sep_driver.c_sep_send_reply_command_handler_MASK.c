
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_device {int reply_ct; int send_ct; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sep_device*) ;
 int VAR_1 ;
 int FUNC_5 (struct sep_device*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct sep_device *VAR_2)
{
 FUNC_0("sep:sep_send_reply_command_handler start\n");


 FUNC_1();

 FUNC_4(VAR_2);

 FUNC_2(&VAR_1);
 VAR_2->send_ct++;

 FUNC_5(VAR_2, VAR_0, VAR_2->send_ct);

 VAR_2->send_ct++;
 VAR_2->reply_ct++;
 FUNC_3(&VAR_1);
 FUNC_0("sep: sep_send_reply_command_handler end\n");
}
