
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request {scalar_t__ cmd_type; scalar_t__* cmd; int errors; } ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_5__ {struct request* rq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;

__attribute__((used)) static inline void FUNC_2(ide_drive_t *VAR_3, int VAR_4)
{
 struct request *VAR_5 = VAR_3->hwif->rq;

 if (VAR_5 && VAR_5->cmd_type == VAR_2 &&
     VAR_5->cmd[0] == VAR_1) {
  if (VAR_4 <= 0 && VAR_5->errors == 0)
   VAR_5->errors = -VAR_0;
  FUNC_1(VAR_3, VAR_4 ? VAR_4 : 0, FUNC_0(VAR_5));
 }
}
