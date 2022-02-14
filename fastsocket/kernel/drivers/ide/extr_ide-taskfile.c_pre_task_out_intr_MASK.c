
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ide_cmd {int tf_flags; } ;
typedef int ide_startstop_t ;
struct TYPE_6__ {int dev_flags; int name; int bad_wstat; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,struct ide_cmd*,int) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,char*,char*) ;
 int VAR_7 ;

__attribute__((used)) static ide_startstop_t FUNC_5(ide_drive_t *VAR_8,
      struct ide_cmd *VAR_9)
{
 ide_startstop_t VAR_10;

 if (FUNC_2(&VAR_10, VAR_8, VAR_0,
     VAR_8->bad_wstat, VAR_4)) {
  FUNC_4("%s: no DRQ after issuing %sWRITE%s\n", VAR_8->name,
   (VAR_9->tf_flags & VAR_3) ? "MULT" : "",
   (VAR_8->dev_flags & VAR_1) ? "_EXT" : "");
  return VAR_10;
 }

 if ((VAR_8->dev_flags & VAR_2) == 0)
  FUNC_3();

 FUNC_1(VAR_8, &VAR_7, VAR_5);

 FUNC_0(VAR_8, VAR_9, 1);

 return VAR_6;
}
