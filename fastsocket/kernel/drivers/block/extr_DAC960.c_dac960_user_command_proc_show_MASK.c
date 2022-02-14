
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_2__ {int UserStatusBuffer; int UserStatusLength; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int FUNC_0 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 DAC960_Controller_T *VAR_2 = (DAC960_Controller_T *)VAR_0->private;

 FUNC_0(VAR_0, "%.*s", VAR_2->UserStatusLength, VAR_2->UserStatusBuffer);
 return 0;
}
