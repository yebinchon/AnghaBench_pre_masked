
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_hsotg_req {int dummy; } ;
struct s3c_hsotg_ep {int lock; } ;
struct s3c_hsotg {int dummy; } ;


 int FUNC_0 (struct s3c_hsotg*,struct s3c_hsotg_ep*,struct s3c_hsotg_req*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct s3c_hsotg *VAR_0,
         struct s3c_hsotg_ep *VAR_1,
         struct s3c_hsotg_req *VAR_2,
         int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_1->lock, VAR_4);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_1->lock, VAR_4);
}
