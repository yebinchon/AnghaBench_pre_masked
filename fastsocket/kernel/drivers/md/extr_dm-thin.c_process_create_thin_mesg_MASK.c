
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int pmd; } ;
typedef int dm_thin_id ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int *,int) ;

__attribute__((used)) static int FUNC_4(unsigned VAR_0, char **VAR_1, struct pool *VAR_2)
{
 dm_thin_id VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, 2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_1[1], &VAR_3, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2->pmd, VAR_3);
 if (VAR_4) {
  FUNC_0("Creation of new thinly-provisioned device with id %s failed.",
         VAR_1[1]);
  return VAR_4;
 }

 return 0;
}
