
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stream; } ;
struct pvr2_context {int initialized_flag; struct pvr2_channel* mc_first; scalar_t__ disconnect_flag; int (* setup_func ) (struct pvr2_context*) ;int hdw; TYPE_1__ video_stream; } ;
struct pvr2_channel {int (* check_func ) (struct pvr2_channel*) ;struct pvr2_channel* mc_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_context*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,void (*) (void*),struct pvr2_context*) ;
 int FUNC_3 (int ,char*,struct pvr2_context*) ;
 int FUNC_4 (struct pvr2_context*) ;
 int FUNC_5 (struct pvr2_channel*) ;

__attribute__((used)) static void FUNC_6(struct pvr2_context *VAR_2)
{
 struct pvr2_channel *VAR_3, *VAR_4;
 FUNC_3(VAR_0,
     "pvr2_context %p (notify)", VAR_2);
 if (!VAR_2->initialized_flag && !VAR_2->disconnect_flag) {
  VAR_2->initialized_flag = !0;
  FUNC_3(VAR_0,
      "pvr2_context %p (initialize)", VAR_2);

  if (FUNC_2(VAR_2->hdw,
     (void (*)(void *))VAR_1,
     VAR_2)) {
   VAR_2->video_stream.stream =
    FUNC_1(VAR_2->hdw);



   if (VAR_2->setup_func) VAR_2->setup_func(VAR_2);
  } else {
   FUNC_3(VAR_0,
       "pvr2_context %p (thread skipping setup)",
       VAR_2);





  }
 }

 for (VAR_3 = VAR_2->mc_first; VAR_3; VAR_3 = VAR_4) {
  VAR_4 = VAR_3->mc_next;
  if (VAR_3->check_func) VAR_3->check_func(VAR_3);
 }

 if (VAR_2->disconnect_flag && !VAR_2->mc_first) {

  FUNC_0(VAR_2);
  return;
 }
}
