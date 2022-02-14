
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct request {int cmd_type; int timeout; int * cmd; } ;
struct ide_cmd {struct request* rq; int tf_flags; } ;
typedef scalar_t__ sector_t ;
typedef int ide_startstop_t ;
struct TYPE_9__ {int debug_mask; } ;
typedef TYPE_1__ ide_drive_t ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_1 (struct request*,char*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (TYPE_1__*,struct request*) ;
 int FUNC_5 (TYPE_1__*,struct request*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int,char*,int ,unsigned long long) ;
 int FUNC_8 (struct ide_cmd*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,struct ide_cmd*) ;
 int FUNC_10 (TYPE_1__*,struct ide_cmd*) ;
 int FUNC_11 (TYPE_1__*,struct request*) ;
 int VAR_4 ;
 int FUNC_12 (struct ide_cmd*,int ,int) ;
 scalar_t__ FUNC_13 (struct request*) ;

__attribute__((used)) static ide_startstop_t FUNC_14(ide_drive_t *VAR_5, struct request *VAR_6,
     sector_t VAR_7)
{
 struct ide_cmd VAR_8;
 int VAR_9 = 0, VAR_10;

 FUNC_7(VAR_2, "cmd: 0x%x, block: %llu",
      VAR_6->cmd[0], (unsigned long long)VAR_7);

 if (VAR_5->debug_mask & VAR_2)
  FUNC_1(VAR_6, "ide_cd_do_request");

 switch (VAR_6->cmd_type) {
 case 130:
  if (FUNC_5(VAR_5, VAR_6) == VAR_4)
   goto out_end;
  break;
 case 129:
 case 131:
 case 132:
  if (!VAR_6->timeout)
   VAR_6->timeout = VAR_0;

  FUNC_4(VAR_5, VAR_6);
  break;
 case 128:

  VAR_9 = 1;
  goto out_end;
 default:
  FUNC_0();
 }


 FUNC_11(VAR_5, VAR_6);

 FUNC_12(&VAR_8, 0, sizeof(VAR_8));

 if (FUNC_13(VAR_6))
  VAR_8.tf_flags |= VAR_3;

 VAR_8.rq = VAR_6;

 if (VAR_6->cmd_type == 130 || FUNC_2(VAR_6)) {
  FUNC_8(&VAR_8, FUNC_2(VAR_6));
  FUNC_10(VAR_5, &VAR_8);
 }

 return FUNC_9(VAR_5, &VAR_8);
out_end:
 VAR_10 = FUNC_3(VAR_6);

 if (VAR_10 == 0)
  VAR_10 = 1;

 FUNC_6(VAR_5, VAR_9 ? 0 : -VAR_1, VAR_10 << 9);

 return VAR_4;
}
