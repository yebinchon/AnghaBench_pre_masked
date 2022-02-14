
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct common_obj {int set_addr; } ;
struct channel_obj {scalar_t__ channel_id; struct common_obj* common; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct channel_obj *VAR_6, int VAR_7)
{
 struct common_obj *VAR_8;

 FUNC_0(2, VAR_5, "vpif_config_addr\n");

 VAR_8 = &(VAR_6->common[VAR_1]);

 if (VAR_0 == VAR_6->channel_id)
  VAR_8->set_addr = VAR_4;
 else if (2 == VAR_7)
  VAR_8->set_addr = VAR_3;
 else
  VAR_8->set_addr = VAR_2;
}
