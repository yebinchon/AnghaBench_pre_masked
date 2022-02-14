
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct cb_data {int (* fn_unknown_sch ) (struct subchannel_id,int ) ;int data; int set; } ;


 scalar_t__ FUNC_0 (int ,struct subchannel_id) ;
 int FUNC_1 (struct subchannel_id,int ) ;

__attribute__((used)) static int FUNC_2(struct subchannel_id VAR_0, void *VAR_1)
{
 struct cb_data *VAR_2 = VAR_1;
 int VAR_3 = 0;

 if (FUNC_0(VAR_2->set, VAR_0))
  VAR_3 = VAR_2->fn_unknown_sch(VAR_0, VAR_2->data);
 return VAR_3;
}
