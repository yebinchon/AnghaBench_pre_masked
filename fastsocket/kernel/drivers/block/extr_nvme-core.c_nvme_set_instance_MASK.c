
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int instance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct nvme_dev *VAR_5)
{
 int VAR_6, VAR_7;

 do {
  if (!FUNC_1(&VAR_4, VAR_2))
   return -VAR_1;

  FUNC_2(&VAR_3);
  VAR_7 = FUNC_0(&VAR_4, &VAR_6);
  FUNC_3(&VAR_3);
 } while (VAR_7 == -VAR_0);

 if (VAR_7)
  return -VAR_1;

 VAR_5->instance = VAR_6;
 return 0;
}
