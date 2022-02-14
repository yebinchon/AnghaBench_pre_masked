
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VIDEOMODE_resolution_t ;
typedef int VIDEOMODE_MODE_t ;


 int FUNC_0 (int *,int *,int ,unsigned int,unsigned int,double*,double*,int) ;
 int FUNC_1 (int *,unsigned int*,unsigned int*,double,double) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (unsigned int*,unsigned int*,int ) ;
 scalar_t__ FUNC_4 (int ,int,int) ;
 int * FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,unsigned int,unsigned int,int,int) ;
 int VAR_1 ;
 int FUNC_8 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_9(void)
{
 VIDEOMODE_MODE_t VAR_3 = FUNC_2();




 int VAR_4 = VAR_0;

 unsigned int VAR_5, VAR_6;
 double VAR_7, VAR_8;
 VIDEOMODE_resolution_t *VAR_9 = FUNC_5(VAR_3, VAR_4);
 VIDEOMODE_resolution_t VAR_10;
 if (VAR_9 == ((void*)0))
  return VAR_0;

 VAR_10 = *VAR_9;
 if (VAR_4)
  FUNC_6(&VAR_10);

 FUNC_3(&VAR_5, &VAR_6, VAR_3);
 FUNC_8();
 FUNC_0(&VAR_10, VAR_9, VAR_3, VAR_5, VAR_6, &VAR_7, &VAR_8, VAR_4);
 FUNC_1(&VAR_10, &VAR_5, &VAR_6, VAR_7, VAR_8);
 FUNC_7(&VAR_10, VAR_3, VAR_5, VAR_6, VAR_0, VAR_4);
 return VAR_1;
}
