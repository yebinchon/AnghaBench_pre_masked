
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_tuner {scalar_t__ index; int rangehigh; int signal; int capability; int type; int name; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ tuner_type; } ;
struct cx88_core {TYPE_2__ board; } ;
struct cx8802_fh {TYPE_1__* dev; } ;
struct TYPE_3__ {struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cx88_core*,struct v4l2_tuner*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4 (struct file *VAR_5, void *VAR_6,
    struct v4l2_tuner *VAR_7)
{
 struct cx88_core *VAR_8 = ((struct cx8802_fh *)VAR_6)->dev->core;
 u32 VAR_9;

 if (FUNC_3(VAR_2 == VAR_8->board.tuner_type))
  return -VAR_0;
 if (0 != VAR_7->index)
  return -VAR_0;

 FUNC_2(VAR_7->name, "Television");
 VAR_7->type = VAR_3;
 VAR_7->capability = VAR_4;
 VAR_7->rangehigh = 0xffffffffUL;

 FUNC_0(VAR_8 ,VAR_7);
 VAR_9 = FUNC_1(VAR_1);
 VAR_7->signal = (VAR_9 & (1<<5)) ? 0xffff : 0x0000;
 return 0;
}
