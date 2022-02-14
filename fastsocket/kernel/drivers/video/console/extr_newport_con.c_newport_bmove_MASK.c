
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_6__ {short xymove; } ;
struct TYPE_5__ {int drawmode0; short xystarti; short xyendi; } ;
struct TYPE_7__ {TYPE_2__ go; TYPE_1__ set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_7, int VAR_8, int VAR_9, int VAR_10,
     int VAR_11, int VAR_12, int VAR_13)
{
 short VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_14 = VAR_9 << 3;
 VAR_16 = ((VAR_9 + VAR_13) << 3) - 1;




 VAR_15 = ((VAR_8 << 4) + VAR_6) & 0x3ff;
 VAR_17 = (((VAR_8 + VAR_12) << 4) - 1 + VAR_6) & 0x3ff;
 VAR_18 = (VAR_11 - VAR_9) << 3;
 VAR_19 = (VAR_10 - VAR_8) << 4;
 if (VAR_18 > 0) {

  VAR_20 = VAR_16;
  VAR_16 = VAR_14;
  VAR_14 = VAR_20;
 }
 FUNC_0(VAR_5);
 VAR_5->set.drawmode0 = (VAR_2 | VAR_0 |
     VAR_1 | VAR_3
     | VAR_4);
 VAR_5->set.xystarti = (VAR_14 << 16) | VAR_15;
 VAR_5->set.xyendi = (VAR_16 << 16) | VAR_17;
 VAR_5->go.xymove = (VAR_18 << 16) | VAR_19;
}
