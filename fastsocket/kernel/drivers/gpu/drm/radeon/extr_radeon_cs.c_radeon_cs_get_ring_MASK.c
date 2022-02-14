
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_cs_parser {void* ring; TYPE_1__* rdev; int priority; } ;
typedef int s32 ;
struct TYPE_2__ {int family; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int VAR_6 ;
 void* VAR_7 ;



 void* VAR_8 ;

__attribute__((used)) static int FUNC_1(struct radeon_cs_parser *VAR_9, u32 VAR_10, s32 VAR_11)
{
 VAR_9->priority = VAR_11;

 switch (VAR_10) {
 default:
  FUNC_0("unknown ring id: %d\n", VAR_10);
  return -VAR_6;
 case 128:
  VAR_9->ring = VAR_8;
  break;
 case 130:
  if (VAR_9->rdev->family >= VAR_5) {
   if (VAR_9->priority > 0)
    VAR_9->ring = VAR_0;
   else
    VAR_9->ring = VAR_1;
  } else
   VAR_9->ring = VAR_8;
  break;
 case 129:
  if (VAR_9->rdev->family >= VAR_3) {
   if (VAR_9->priority > 0)
    VAR_9->ring = VAR_7;
   else
    VAR_9->ring = VAR_2;
  } else if (VAR_9->rdev->family >= VAR_4) {
   VAR_9->ring = VAR_7;
  } else {
   return -VAR_6;
  }
  break;
 }
 return 0;
}
