
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_sa_manager {unsigned int size; int * bo; int * flist; int olist; int * hole; int domain; int wq; } ;
struct radeon_device {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_device*,unsigned int,int ,int,int ,int *,int **) ;

int FUNC_4(struct radeon_device *VAR_3,
         struct radeon_sa_manager *VAR_4,
         unsigned VAR_5, u32 VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_2(&VAR_4->wq);
 VAR_4->bo = ((void*)0);
 VAR_4->size = VAR_5;
 VAR_4->domain = VAR_6;
 VAR_4->hole = &VAR_4->olist;
 FUNC_0(&VAR_4->olist);
 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  FUNC_0(&VAR_4->flist[VAR_7]);
 }

 VAR_8 = FUNC_3(VAR_3, VAR_5, VAR_1, 1,
        VAR_0, ((void*)0), &VAR_4->bo);
 if (VAR_8) {
  FUNC_1(VAR_3->dev, "(%d) failed to allocate bo for manager\n", VAR_8);
  return VAR_8;
 }

 return VAR_8;
}
