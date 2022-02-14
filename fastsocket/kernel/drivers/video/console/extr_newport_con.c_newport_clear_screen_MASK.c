
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int xyendi; } ;
struct TYPE_6__ {int wrmask; int drawmode0; int colori; int xystarti; } ;
struct TYPE_7__ {TYPE_1__ go; TYPE_2__ set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static inline void FUNC_1(int VAR_7, int VAR_8, int VAR_9,
     int VAR_10, int VAR_11)
{
 if (VAR_5)
  return;

 FUNC_0(VAR_6);
 VAR_6->set.wrmask = 0xffffffff;
 VAR_6->set.drawmode0 = (VAR_2 | VAR_0 |
     VAR_1 | VAR_3
     | VAR_4);
 VAR_6->set.colori = VAR_11;
 VAR_6->set.xystarti = (VAR_7 << 16) | VAR_8;
 VAR_6->go.xyendi = (VAR_9 << 16) | VAR_10;
}
