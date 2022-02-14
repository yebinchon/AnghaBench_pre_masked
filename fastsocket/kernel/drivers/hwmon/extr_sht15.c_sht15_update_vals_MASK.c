
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht15_data {int valid; int read_lock; scalar_t__ last_updat; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sht15_data*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sht15_data *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = VAR_0;

 FUNC_0(&VAR_6->read_lock);
 if (FUNC_3(VAR_5, VAR_6->last_updat + VAR_8)
     || !VAR_6->valid) {
  VAR_6->flag = VAR_3;
  VAR_7 = FUNC_2(VAR_6, VAR_1, 160);
  if (VAR_7)
   goto error_ret;
  VAR_6->flag = VAR_4;
  VAR_7 = FUNC_2(VAR_6, VAR_2, 400);
  if (VAR_7)
   goto error_ret;
  VAR_6->valid = 1;
  VAR_6->last_updat = VAR_5;
 }
error_ret:
 FUNC_1(&VAR_6->read_lock);

 return VAR_7;
}
