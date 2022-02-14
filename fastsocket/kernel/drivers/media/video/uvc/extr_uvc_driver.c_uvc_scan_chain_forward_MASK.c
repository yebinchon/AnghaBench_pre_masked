
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_chain {int entities; int dev; } ;
struct uvc_entity {int bNrInPins; int id; int chain; } ;


 int VAR_0 ;
 int FUNC_0 (struct uvc_entity*) ;
 int FUNC_1 (struct uvc_entity*) ;



 int VAR_1 ;
 int VAR_2 ;


 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,...) ;
 struct uvc_entity* FUNC_4 (int ,int ,struct uvc_entity*) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct uvc_video_chain *VAR_4,
 struct uvc_entity *VAR_5, struct uvc_entity *VAR_6)
{
 struct uvc_entity *VAR_7;
 int VAR_8;


 VAR_7 = ((void*)0);
 VAR_8 = 0;

 while (1) {
  VAR_7 = FUNC_4(VAR_4->dev, VAR_5->id,
   VAR_7);
  if (VAR_7 == ((void*)0))
   break;
  if (VAR_7 == VAR_6)
   continue;

  switch (FUNC_1(VAR_7)) {
  case 128:
   if (VAR_7->bNrInPins != 1) {
    FUNC_5(VAR_1, "Extension unit %d "
       "has more than 1 input pin.\n",
       VAR_5->id);
    return -VAR_0;
   }

   FUNC_2(&VAR_7->chain, &VAR_4->entities);
   if (VAR_3 & VAR_2) {
    if (!VAR_8)
     FUNC_3(" (->");

    FUNC_3(" XU %d", VAR_7->id);
    VAR_8 = 1;
   }
   break;

  case 130:
  case 132:
  case 131:
  case 129:
   if (FUNC_0(VAR_7)) {
    FUNC_5(VAR_1, "Unsupported input "
     "terminal %u.\n", VAR_7->id);
    return -VAR_0;
   }

   FUNC_2(&VAR_7->chain, &VAR_4->entities);
   if (VAR_3 & VAR_2) {
    if (!VAR_8)
     FUNC_3(" (->");

    FUNC_3(" OT %d", VAR_7->id);
    VAR_8 = 1;
   }
   break;
  }
 }
 if (VAR_8)
  FUNC_3(")");

 return 0;
}
