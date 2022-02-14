
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int se_dev; TYPE_1__* se_tfo; } ;
struct TYPE_2__ {int (* write_pending ) (struct se_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct se_cmd*) ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 (struct se_cmd*,int ) ;

__attribute__((used)) static void FUNC_3(struct se_cmd *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2->se_tfo->write_pending(VAR_2);
 if (VAR_3 == -VAR_0 || VAR_3 == -VAR_1) {
  FUNC_0("Handling write_pending QUEUE__FULL: se_cmd: %p\n",
    VAR_2);
  FUNC_2(VAR_2, VAR_2->se_dev);
 }
}
