
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int ide_startstop_t ;
struct TYPE_5__ {scalar_t__ max_failures; scalar_t__ failures; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,unsigned long,int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int VAR_1 ;

int FUNC_2(ide_startstop_t *VAR_2, ide_drive_t *VAR_3, u8 VAR_4,
    u8 VAR_5, unsigned long VAR_6)
{
 int VAR_7;
 u8 VAR_8;


 if (VAR_3->max_failures && (VAR_3->failures > VAR_3->max_failures)) {
  *VAR_2 = VAR_1;
  return 1;
 }

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_8);

 if (VAR_7) {
  char *VAR_9 = (VAR_7 == -VAR_0) ? "status timeout" : "status error";
  *VAR_2 = FUNC_1(VAR_3, VAR_9, VAR_8);
 }

 return VAR_7;
}
