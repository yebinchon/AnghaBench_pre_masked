
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_output_q {int use_cq; int aobs; } ;
struct qaob {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

int FUNC_1(struct qdio_output_q *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = 0;
 VAR_4 = 1;
 VAR_2->aobs = FUNC_0(sizeof(struct qaob *) * VAR_1,
     VAR_0);
 if (!VAR_2->aobs) {
  VAR_4 = 0;
  VAR_3 = -1;
  goto out;
 }

out:
 VAR_2->use_cq = VAR_4;
 return VAR_3;
}
