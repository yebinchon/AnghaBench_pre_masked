
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int errors; struct bsg_job* special; } ;
struct bsg_job {int dummy; } ;


 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct bsg_job*) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_0)
{
 struct bsg_job *VAR_1 = VAR_0->special;

 FUNC_0(VAR_0, VAR_0->errors);
 FUNC_1(VAR_1);
}
