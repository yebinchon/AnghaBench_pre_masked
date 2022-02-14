
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct request {scalar_t__ cmd_type; int errors; struct ide_cmd* special; } ;
struct ide_cmd {int dummy; } ;
typedef int ide_startstop_t ;
struct TYPE_10__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_9__ {struct request* rq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,struct request*,int,int) ;
 scalar_t__ FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (TYPE_2__*,struct ide_cmd*,int,int) ;
 int FUNC_4 (TYPE_2__*,struct request*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,char const*,int) ;
 int VAR_3 ;

ide_startstop_t FUNC_7(ide_drive_t *VAR_4, const char *VAR_5, u8 VAR_6)
{
 struct request *VAR_7;
 u8 VAR_8;

 VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6);

 VAR_7 = VAR_4->hwif->rq;
 if (VAR_7 == ((void*)0))
  return VAR_3;


 if (VAR_7->cmd_type != VAR_2) {
  if (VAR_7->cmd_type == VAR_1) {
   struct ide_cmd *VAR_9 = VAR_7->special;

   if (VAR_9)
    FUNC_3(VAR_4, VAR_9, VAR_6, VAR_8);
  } else if (FUNC_1(VAR_7)) {
   VAR_7->errors = 1;
   FUNC_4(VAR_4, VAR_7);
   return VAR_3;
  }
  VAR_7->errors = VAR_8;
  FUNC_5(VAR_4, VAR_8 ? -VAR_0 : 0, FUNC_2(VAR_7));
  return VAR_3;
 }

 return FUNC_0(VAR_4, VAR_7, VAR_6, VAR_8);
}
