
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_hsotg {int * eps; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct s3c_hsotg*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct s3c_hsotg*,int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct s3c_hsotg *VAR_3)
{
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_3, &VAR_3->eps[VAR_4], -VAR_0, 1);

 FUNC_0(VAR_3, VAR_2);
}
