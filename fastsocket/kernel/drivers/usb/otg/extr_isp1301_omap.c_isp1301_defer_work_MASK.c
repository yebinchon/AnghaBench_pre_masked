
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp1301 {TYPE_1__* client; int working; int work; int todo; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct isp1301 *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_0 && !FUNC_3(VAR_1, &VAR_0->todo)) {
  (void) FUNC_1(&VAR_0->client->dev);
  VAR_2 = FUNC_2(&VAR_0->work);
  if (!VAR_2 && !VAR_0->working)
   FUNC_0(&VAR_0->client->dev,
    "work item %d may be lost\n", VAR_1);
 }
}
