
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expires; } ;
struct ata_port {int pflags; int fastdrain_cnt; TYPE_1__ fastdrain_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ata_port*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_3, int VAR_4)
{
 int VAR_5;


 if (VAR_3->pflags & VAR_1)
  return;

 VAR_3->pflags |= VAR_1;

 if (!VAR_4)
  return;


 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return;


 VAR_3->fastdrain_cnt = VAR_5;
 VAR_3->fastdrain_timer.expires =
  FUNC_1(VAR_2, VAR_0);
 FUNC_0(&VAR_3->fastdrain_timer);
}
