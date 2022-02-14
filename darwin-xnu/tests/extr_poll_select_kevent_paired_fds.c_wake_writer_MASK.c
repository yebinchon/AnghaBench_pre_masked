
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_fd; int out_fd; int sem; } ;
struct TYPE_4__ {int wr_kind; TYPE_1__ wr_wait; } ;




 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(void)
{
 FUNC_1("waking writer");

 switch (VAR_1.wr_kind) {
 case 128:
  FUNC_1("signal shared.wr_wait.sem");
  FUNC_3(VAR_1.wr_wait.sem);
  break;
 case 129: {
  char VAR_2 = 'a';
  FUNC_2(VAR_1.wr_wait.out_fd);
  VAR_0; FUNC_0(FUNC_4(
    VAR_1.wr_wait.in_fd, &VAR_2, 1), ((void*)0));
  break;
 }
 }
}
