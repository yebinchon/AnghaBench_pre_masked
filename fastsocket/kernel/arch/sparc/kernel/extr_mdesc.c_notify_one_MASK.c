
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdesc_notifier_client {int add; int node_name; int remove; } ;
struct mdesc_handle {int dummy; } ;


 int FUNC_0 (int ,struct mdesc_handle*,struct mdesc_handle*,int ) ;

__attribute__((used)) static void FUNC_1(struct mdesc_notifier_client *VAR_0,
         struct mdesc_handle *VAR_1,
         struct mdesc_handle *VAR_2)
{
 FUNC_0(VAR_0->node_name, VAR_1, VAR_2, VAR_0->remove);
 FUNC_0(VAR_0->node_name, VAR_2, VAR_1, VAR_0->add);
}
