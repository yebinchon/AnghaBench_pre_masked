
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ilo_hwinfo {int dummy; } ;
struct TYPE_2__ {char* recv_fifobar; } ;
struct ccb {TYPE_1__ ccb_u3; } ;


 int FUNC_0 (struct ilo_hwinfo*,char*) ;

__attribute__((used)) static int FUNC_1(struct ilo_hwinfo *VAR_0, struct ccb *VAR_1)
{
 char *VAR_2 = VAR_1->ccb_u3.recv_fifobar;

 return FUNC_0(VAR_0, VAR_2);
}
