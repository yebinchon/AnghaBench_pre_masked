
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_device {int name; int done_cmds; int wq_done; int flags; } ;
struct bsg_command {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bsg_command* FUNC_0 (int ) ;
 struct bsg_command* FUNC_1 (struct bsg_device*) ;
 int FUNC_2 (char*,int ,struct bsg_command*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct bsg_command *FUNC_5(struct bsg_device *VAR_3)
{
 struct bsg_command *VAR_4;
 int VAR_5;

 do {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   break;

  if (!FUNC_3(VAR_0, &VAR_3->flags)) {
   VAR_4 = FUNC_0(-VAR_1);
   break;
  }

  VAR_5 = FUNC_4(VAR_3->wq_done, VAR_3->done_cmds);
  if (VAR_5) {
   VAR_4 = FUNC_0(-VAR_2);
   break;
  }
 } while (1);

 FUNC_2("%s: returning done %p\n", VAR_3->name, VAR_4);

 return VAR_4;
}
