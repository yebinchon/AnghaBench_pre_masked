
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_work {int ws; int i2400m; } ;
struct i2400m {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 int FUNC_1 (struct i2400m*) ;
 struct i2400m_work* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct i2400m *VAR_2,
    void (*VAR_3)(struct work_struct *), gfp_t VAR_4)
{
 int VAR_5;
 struct i2400m_work *VAR_6;

 VAR_5 = -VAR_0;
 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_4);
 if (VAR_6 == ((void*)0))
  goto error_kzalloc;
 VAR_6->i2400m = FUNC_1(VAR_2);
 FUNC_0(&VAR_6->ws, VAR_3);
 VAR_5 = FUNC_3(&VAR_6->ws);
 if (VAR_5 == 0)
  VAR_5 = -VAR_1;
error_kzalloc:
 return VAR_5;
}
