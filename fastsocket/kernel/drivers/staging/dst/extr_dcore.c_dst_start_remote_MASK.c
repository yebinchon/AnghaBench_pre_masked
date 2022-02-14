
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_trans {int dummy; } ;
struct dst_node {TYPE_1__* disk; int name; } ;
struct TYPE_2__ {int first_minor; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct dst_node*) ;
 int FUNC_3 (struct dst_node*) ;
 int FUNC_4 (struct dst_node*,int) ;

__attribute__((used)) static int FUNC_5(struct dst_node *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_4(VAR_0, sizeof(struct dst_trans));
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_3(VAR_0);
 FUNC_0(VAR_0->disk);

 FUNC_1("DST: started remote node '%s', minor: %d.\n", VAR_0->name, VAR_0->disk->first_minor);

 return 0;
}
