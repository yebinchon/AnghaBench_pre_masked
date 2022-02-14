
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rceb {int dummy; } ;
struct uwb_rc_cmd_done_params {int completion; int reply_size; scalar_t__ reply; } ;
struct uwb_rc {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,struct uwb_rceb*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct uwb_rc *VAR_2, void *VAR_3,
       struct uwb_rceb *VAR_4, ssize_t VAR_5)
{
 struct uwb_rc_cmd_done_params *VAR_6 = (struct uwb_rc_cmd_done_params *)VAR_3;

 if (VAR_5 > 0) {
  if (VAR_6->reply)
   VAR_5 = FUNC_3(VAR_6->reply_size, VAR_5);
  else
   VAR_6->reply = FUNC_1(VAR_5, VAR_1);

  if (VAR_6->reply)
   FUNC_2(VAR_6->reply, VAR_4, VAR_5);
  else
   VAR_5 = -VAR_0;
 }
 VAR_6->reply_size = VAR_5;
 FUNC_0(&VAR_6->completion);
}
