
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct audio_in {int type; } ;
typedef int cmd ;
struct TYPE_4__ {int type_0; scalar_t__ type_1; int cmd_id; } ;
typedef TYPE_1__ audrec_cmd_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct audio_in*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct audio_in *VAR_4, int VAR_5)
{
 audrec_cmd_cfg VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd_id = VAR_0;
 VAR_6.type_0 = VAR_5 ? VAR_2 : VAR_1;
 VAR_6.type_0 |= (VAR_3 | VAR_4->type);
 VAR_6.type_1 = 0;

 return FUNC_0(VAR_4, &VAR_6, sizeof(VAR_6));
}
