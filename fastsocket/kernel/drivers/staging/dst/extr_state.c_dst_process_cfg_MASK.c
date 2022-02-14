
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int socket; int permissions; struct dst_cmd* data; struct dst_node* node; } ;
struct dst_node {int size; } ;
struct dst_cmd {int rw; int sector; } ;


 int FUNC_0 (struct dst_cmd*) ;
 int FUNC_1 (int ,struct dst_cmd*,int,int ) ;
 int FUNC_2 (struct dst_state*) ;
 int FUNC_3 (struct dst_state*) ;

__attribute__((used)) static int FUNC_4(struct dst_state *VAR_0)
{
 struct dst_node *VAR_1 = VAR_0->node;
 struct dst_cmd *VAR_2 = VAR_0->data;
 int VAR_3;

 VAR_2->sector = VAR_1->size;
 VAR_2->rw = VAR_0->permissions;

 FUNC_0(VAR_2);

 FUNC_2(VAR_0);
 VAR_3 = FUNC_1(VAR_0->socket, VAR_2, sizeof(struct dst_cmd), 0);
 FUNC_3(VAR_0);

 return VAR_3;
}
