
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audpp_cmd_routing_mode {int routing_mode; int object_number; int cmd_id; } ;
struct audio {scalar_t__ pcm_feedback; int dec_id; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct audpp_cmd_routing_mode*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct audpp_cmd_routing_mode*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct audio *VAR_3)
{
 struct audpp_cmd_routing_mode VAR_4;
 FUNC_1("audpp_cmd_cfg_routing_mode()\n");
 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cmd_id = VAR_0;
 VAR_4.object_number = VAR_3->dec_id;
 if (VAR_3->pcm_feedback)
  VAR_4.routing_mode = VAR_1;
 else
  VAR_4.routing_mode = VAR_2;

 FUNC_0(&VAR_4, sizeof(VAR_4));
}
