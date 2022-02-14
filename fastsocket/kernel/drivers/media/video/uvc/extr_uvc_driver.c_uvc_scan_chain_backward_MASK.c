
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_chain {int dev; int entities; struct uvc_entity* selector; } ;
struct uvc_entity {int* baSourceID; int bNrInPins; int chain; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct uvc_entity*) ;
 int FUNC_1 (struct uvc_entity*) ;
 int FUNC_2 (struct uvc_entity*) ;






 int VAR_1 ;
 int VAR_2 ;




 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,...) ;
 struct uvc_entity* FUNC_5 (int ,int) ;
 int FUNC_6 (struct uvc_video_chain*,struct uvc_entity*,struct uvc_entity*) ;
 int FUNC_7 (int ,char*,int,...) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct uvc_video_chain *VAR_4,
 struct uvc_entity **VAR_5)
{
 struct uvc_entity *VAR_6 = *VAR_5;
 struct uvc_entity *VAR_7;
 int VAR_8 = -VAR_0, VAR_9;

 switch (FUNC_2(VAR_6)) {
 case 130:
 case 129:
  VAR_8 = VAR_6->baSourceID[0];
  break;

 case 128:

  if (VAR_6->bNrInPins == 1) {
   VAR_8 = VAR_6->baSourceID[0];
   break;
  }

  if (VAR_3 & VAR_2)
   FUNC_4(" <- IT");

  VAR_4->selector = VAR_6;
  for (VAR_9 = 0; VAR_9 < VAR_6->bNrInPins; ++VAR_9) {
   VAR_8 = VAR_6->baSourceID[VAR_9];
   VAR_7 = FUNC_5(VAR_4->dev, VAR_8);
   if (VAR_7 == ((void*)0) || !FUNC_0(VAR_7)) {
    FUNC_7(VAR_1, "Selector unit %d "
     "input %d isn't connected to an "
     "input terminal\n", VAR_6->id, VAR_9);
    return -1;
   }

   if (VAR_3 & VAR_2)
    FUNC_4(" %d", VAR_7->id);

   FUNC_3(&VAR_7->chain, &VAR_4->entities);
   FUNC_6(VAR_4, VAR_7, VAR_6);
  }

  if (VAR_3 & VAR_2)
   FUNC_4("\n");

  VAR_8 = 0;
  break;

 case 135:
 case 137:
 case 136:
 case 132:
 case 134:
 case 133:
 case 131:
  VAR_8 = FUNC_1(VAR_6) ? VAR_6->baSourceID[0] : 0;
  break;
 }

 if (VAR_8 <= 0) {
  *VAR_5 = ((void*)0);
  return VAR_8;
 }

 VAR_6 = FUNC_5(VAR_4->dev, VAR_8);
 if (VAR_6 == ((void*)0)) {
  FUNC_7(VAR_1, "Found reference to "
   "unknown entity %d.\n", VAR_8);
  return -VAR_0;
 }

 *VAR_5 = VAR_6;
 return 0;
}
