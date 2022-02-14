
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct request {scalar_t__ errors; struct ide_cmd* special; } ;
struct ide_cmd {scalar_t__ protocol; } ;
typedef int ide_startstop_t ;
struct TYPE_6__ {int name; } ;
typedef TYPE_1__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (TYPE_1__*,struct ide_cmd*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (struct ide_cmd*,int) ;
 int FUNC_5 (TYPE_1__*,struct ide_cmd*) ;
 int VAR_1 ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static ide_startstop_t FUNC_7 (ide_drive_t *VAR_2,
  struct request *VAR_3)
{
 struct ide_cmd *VAR_4 = VAR_3->special;

 if (VAR_4) {
  if (VAR_4->protocol == VAR_0) {
   FUNC_4(VAR_4, FUNC_1(VAR_3) << 9);
   FUNC_5(VAR_2, VAR_4);
  }

  return FUNC_2(VAR_2, VAR_4);
 }
 VAR_3->errors = 0;
 FUNC_3(VAR_2, 0, FUNC_0(VAR_3));

  return VAR_1;
}
