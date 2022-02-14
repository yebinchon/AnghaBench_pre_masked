
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* user_tcflag_t ;
typedef void* user_speed_t ;
struct user_termios {void* c_ospeed; void* c_ispeed; int c_cc; void* c_lflag; void* c_cflag; void* c_oflag; void* c_iflag; } ;
struct termios32 {scalar_t__ c_ospeed; scalar_t__ c_ispeed; int c_cc; scalar_t__ c_lflag; scalar_t__ c_cflag; scalar_t__ c_oflag; scalar_t__ c_iflag; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct termios32 *VAR_0, struct user_termios *VAR_1)
{
 VAR_1->c_iflag = (user_tcflag_t)VAR_0->c_iflag;
 VAR_1->c_oflag = (user_tcflag_t)VAR_0->c_oflag;
 VAR_1->c_cflag = (user_tcflag_t)VAR_0->c_cflag;
 VAR_1->c_lflag = (user_tcflag_t)VAR_0->c_lflag;


 FUNC_0(VAR_0->c_cc, VAR_1->c_cc, sizeof(VAR_0->c_cc));

 VAR_1->c_ispeed = (user_speed_t)VAR_0->c_ispeed;
 VAR_1->c_ospeed = (user_speed_t)VAR_0->c_ospeed;
}
