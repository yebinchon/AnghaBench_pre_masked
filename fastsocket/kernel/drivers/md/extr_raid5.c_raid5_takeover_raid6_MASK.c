
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int layout; int new_level; int new_layout; int delta_disks; int raid_disks; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (struct mddev*) ;

__attribute__((used)) static void *FUNC_2(struct mddev *VAR_6)
{
 int VAR_7;

 switch (VAR_6->layout) {
 case 133:
  VAR_7 = VAR_0;
  break;
 case 129:
  VAR_7 = VAR_3;
  break;
 case 132:
  VAR_7 = VAR_1;
  break;
 case 128:
  VAR_7 = VAR_4;
  break;
 case 131:
  VAR_7 = VAR_2;
  break;
 case 130:
  VAR_7 = 130;
  break;
 default:
  return FUNC_0(-VAR_5);
 }
 VAR_6->new_level = 5;
 VAR_6->new_layout = VAR_7;
 VAR_6->delta_disks = -1;
 VAR_6->raid_disks -= 1;
 return FUNC_1(VAR_6);
}
