
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct request {int dummy; } ;
typedef int ide_startstop_t ;
struct TYPE_5__ {scalar_t__ media; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (TYPE_1__*,struct request*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,struct request*,int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static ide_startstop_t FUNC_2(ide_drive_t *VAR_1, struct request *VAR_2,
       u8 VAR_3, u8 VAR_4)
{
 if (VAR_1->media == VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
