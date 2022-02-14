
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int raid_disks; } ;
struct r10conf {int have_replacement; scalar_t__ next_resync; int r10buf_pool; TYPE_2__* mirrors; TYPE_1__ geo; } ;
struct TYPE_4__ {scalar_t__ replacement; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ,struct r10conf*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct r10conf *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_6 = VAR_2 / VAR_1;
 FUNC_0(VAR_5->r10buf_pool);
 VAR_5->have_replacement = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5->geo.raid_disks; VAR_7++)
  if (VAR_5->mirrors[VAR_7].replacement)
   VAR_5->have_replacement = 1;
 VAR_5->r10buf_pool = FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);
 if (!VAR_5->r10buf_pool)
  return -VAR_0;
 VAR_5->next_resync = 0;
 return 0;
}
