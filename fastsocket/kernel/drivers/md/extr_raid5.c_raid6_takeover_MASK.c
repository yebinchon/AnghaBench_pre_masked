
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int degraded; int raid_disks; int layout; int new_level; int new_layout; int delta_disks; int * pers; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int VAR_6 ;
 void* FUNC_1 (struct mddev*) ;

__attribute__((used)) static void *FUNC_2(struct mddev *VAR_7)
{




 int VAR_8;

 if (VAR_7->pers != &VAR_6)
  return FUNC_0(-VAR_5);
 if (VAR_7->degraded > 1)
  return FUNC_0(-VAR_5);
 if (VAR_7->raid_disks > 253)
  return FUNC_0(-VAR_5);
 if (VAR_7->raid_disks < 3)
  return FUNC_0(-VAR_5);

 switch (VAR_7->layout) {
 case 133:
  VAR_8 = VAR_0;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 case 132:
  VAR_8 = VAR_1;
  break;
 case 128:
  VAR_8 = VAR_4;
  break;
 case 131:
  VAR_8 = VAR_2;
  break;
 case 130:
  VAR_8 = 130;
  break;
 default:
  return FUNC_0(-VAR_5);
 }
 VAR_7->new_level = 6;
 VAR_7->new_layout = VAR_8;
 VAR_7->delta_disks = 1;
 VAR_7->raid_disks += 1;
 return FUNC_1(VAR_7);
}
