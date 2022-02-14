
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct iio_trigger *VAR_6)
{
 int VAR_7 = 0;

idr_again:
 if (FUNC_5(FUNC_1(&VAR_4, VAR_2) == 0))
  return -VAR_1;

 FUNC_3(&VAR_5);
 VAR_7 = FUNC_0(&VAR_4, ((void*)0), &VAR_6->id);
 FUNC_4(&VAR_5);
 if (FUNC_5(VAR_7 == -VAR_0))
  goto idr_again;
 else if (FUNC_2(!VAR_7))
  VAR_6->id = VAR_6->id & VAR_3;

 return VAR_7;
}
