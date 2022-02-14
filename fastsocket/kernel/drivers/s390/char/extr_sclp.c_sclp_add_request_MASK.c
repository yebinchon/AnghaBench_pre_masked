
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * prev; } ;
struct sclp_req {TYPE_1__ list; int sccb; scalar_t__ start_count; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sclp_req*) ;
 int FUNC_1 (struct sclp_req*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(struct sclp_req *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 FUNC_4(&VAR_3, VAR_8);
 if (!FUNC_0(VAR_7)) {
  FUNC_5(&VAR_3, VAR_8);
  return -VAR_0;
 }
 VAR_7->status = VAR_2;
 VAR_7->start_count = 0;
 FUNC_2(&VAR_7->list, &VAR_4);
 VAR_9 = 0;

 if (VAR_5 == VAR_6 &&
     VAR_7->list.prev == &VAR_4) {
  if (!VAR_7->sccb) {
   FUNC_3(&VAR_7->list);
   VAR_9 = -VAR_1;
   goto out;
  }
  VAR_9 = FUNC_1(VAR_7);
  if (VAR_9)
   FUNC_3(&VAR_7->list);
 }
out:
 FUNC_5(&VAR_3, VAR_8);
 return VAR_9;
}
