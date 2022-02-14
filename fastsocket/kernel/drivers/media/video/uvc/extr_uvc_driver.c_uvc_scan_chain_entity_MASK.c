
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_chain {int entities; struct uvc_entity* selector; struct uvc_entity* processing; } ;
struct uvc_entity {int id; int bNrInPins; int chain; } ;


 int FUNC_0 (struct uvc_entity*) ;
 int FUNC_1 (struct uvc_entity*) ;



 int VAR_0 ;
 int VAR_1 ;




 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct uvc_video_chain *VAR_3,
 struct uvc_entity *VAR_4)
{
 switch (FUNC_1(VAR_4)) {
 case 130:
  if (VAR_2 & VAR_1)
   FUNC_3(" <- XU %d", VAR_4->id);

  if (VAR_4->bNrInPins != 1) {
   FUNC_4(VAR_0, "Extension unit %d has more "
    "than 1 input pin.\n", VAR_4->id);
   return -1;
  }

  break;

 case 129:
  if (VAR_2 & VAR_1)
   FUNC_3(" <- PU %d", VAR_4->id);

  if (VAR_3->processing != ((void*)0)) {
   FUNC_4(VAR_0, "Found multiple "
    "Processing Units in chain.\n");
   return -1;
  }

  VAR_3->processing = VAR_4;
  break;

 case 128:
  if (VAR_2 & VAR_1)
   FUNC_3(" <- SU %d", VAR_4->id);


  if (VAR_4->bNrInPins == 1)
   break;

  if (VAR_3->selector != ((void*)0)) {
   FUNC_4(VAR_0, "Found multiple Selector "
    "Units in chain.\n");
   return -1;
  }

  VAR_3->selector = VAR_4;
  break;

 case 132:
 case 134:
 case 133:
  if (VAR_2 & VAR_1)
   FUNC_3(" <- IT %d\n", VAR_4->id);

  break;

 case 131:
  if (FUNC_0(VAR_4)) {
   if (VAR_2 & VAR_1)
    FUNC_3(" <- IT %d\n", VAR_4->id);
  } else {
   if (VAR_2 & VAR_1)
    FUNC_3(" OT %d", VAR_4->id);
  }

  break;

 default:
  FUNC_4(VAR_0, "Unsupported entity type "
   "0x%04x found in chain.\n", FUNC_1(VAR_4));
  return -1;
 }

 FUNC_2(&VAR_4->chain, &VAR_3->entities);
 return 0;
}
