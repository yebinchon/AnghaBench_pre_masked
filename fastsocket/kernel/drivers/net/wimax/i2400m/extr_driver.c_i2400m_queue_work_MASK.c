
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_work {int ws; int pl; int i2400m; } ;
struct i2400m {int * work_queue; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,void (*) (struct work_struct*)) ;
 int FUNC_2 (struct i2400m*) ;
 struct i2400m_work* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,void const*,size_t) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(struct i2400m *VAR_1,
        void (*VAR_2)(struct work_struct *), gfp_t VAR_3,
        const void *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct i2400m_work *VAR_7;

 FUNC_0(VAR_1->work_queue == ((void*)0));
 VAR_6 = -VAR_0;
 VAR_7 = FUNC_3(sizeof(*VAR_7) + VAR_5, VAR_3);
 if (VAR_7 == ((void*)0))
  goto error_kzalloc;
 VAR_7->i2400m = FUNC_2(VAR_1);
 FUNC_4(VAR_7->pl, VAR_4, VAR_5);
 FUNC_1(&VAR_7->ws, VAR_2);
 VAR_6 = FUNC_5(VAR_1->work_queue, &VAR_7->ws);
error_kzalloc:
 return VAR_6;
}
