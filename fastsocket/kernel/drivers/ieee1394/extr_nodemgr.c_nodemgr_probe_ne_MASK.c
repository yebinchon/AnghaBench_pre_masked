
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_entry {int generation; scalar_t__ needs_probe; int device; scalar_t__ in_limbo; struct hpsb_host* host; } ;
struct hpsb_host {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *) ;
 int FUNC_1 (struct node_entry*,int) ;
 int FUNC_2 (struct node_entry*) ;
 int FUNC_3 (struct node_entry*) ;
 int FUNC_4 (struct node_entry*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct hpsb_host *VAR_0, struct node_entry *VAR_1,
        int VAR_2)
{
 struct device *VAR_3;

 if (VAR_1->host != VAR_0 || VAR_1->in_limbo)
  return;

 VAR_3 = FUNC_0(&VAR_1->device);
 if (!VAR_3)
  return;

 FUNC_1(VAR_1, VAR_2);






 if (VAR_1->needs_probe)
  FUNC_3(VAR_1);
 else if (VAR_1->generation == VAR_2)
  FUNC_4(VAR_1);
 else
  FUNC_2(VAR_1);

 FUNC_5(VAR_3);
}
