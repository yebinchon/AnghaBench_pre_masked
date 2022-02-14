
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tcflag_t ;
struct user_termios {scalar_t__ c_ospeed; scalar_t__ c_ispeed; int c_cc; scalar_t__ c_lflag; scalar_t__ c_cflag; scalar_t__ c_oflag; scalar_t__ c_iflag; } ;
struct termios32 {void* c_ospeed; void* c_ispeed; int c_cc; void* c_lflag; void* c_cflag; void* c_oflag; void* c_iflag; } ;
typedef void* speed_t ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct user_termios *VAR_0, struct termios32 *VAR_1)
{
 VAR_1->c_iflag = (tcflag_t)VAR_0->c_iflag;
 VAR_1->c_oflag = (tcflag_t)VAR_0->c_oflag;
 VAR_1->c_cflag = (tcflag_t)VAR_0->c_cflag;
 VAR_1->c_lflag = (tcflag_t)VAR_0->c_lflag;


 FUNC_0(VAR_0->c_cc, VAR_1->c_cc, sizeof(VAR_0->c_cc));

 VAR_1->c_ispeed = (speed_t)VAR_0->c_ispeed;
 VAR_1->c_ospeed = (speed_t)VAR_0->c_ospeed;
}
