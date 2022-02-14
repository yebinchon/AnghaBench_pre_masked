
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_video_chain {int dummy; } ;
struct TYPE_2__ {scalar_t__ prev; scalar_t__ next; } ;
struct uvc_entity {int id; TYPE_1__ chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct uvc_video_chain*,struct uvc_entity**) ;
 scalar_t__ FUNC_1 (struct uvc_video_chain*,struct uvc_entity*) ;
 scalar_t__ FUNC_2 (struct uvc_video_chain*,struct uvc_entity*,struct uvc_entity*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct uvc_video_chain *VAR_3,
     struct uvc_entity *VAR_4)
{
 struct uvc_entity *VAR_5, *VAR_6;

 FUNC_3(VAR_2, "Scanning UVC chain:");

 VAR_5 = VAR_4;
 VAR_6 = ((void*)0);

 while (VAR_5 != ((void*)0)) {

  if (VAR_5->chain.next || VAR_5->chain.prev) {
   FUNC_3(VAR_1, "Found reference to "
    "entity %d already in chain.\n", VAR_5->id);
   return -VAR_0;
  }


  if (FUNC_1(VAR_3, VAR_5) < 0)
   return -VAR_0;


  if (FUNC_2(VAR_3, VAR_5, VAR_6) < 0)
   return -VAR_0;


  VAR_6 = VAR_5;
  if (FUNC_0(VAR_3, &VAR_5) < 0)
   return -VAR_0;
 }

 return 0;
}
