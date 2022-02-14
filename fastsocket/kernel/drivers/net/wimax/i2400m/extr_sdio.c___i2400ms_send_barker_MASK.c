
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct sdio_func {struct device dev; } ;
struct i2400ms {struct sdio_func* func; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct device*,char*,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,int const*,size_t) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*,int ,void*,int ) ;
 int FUNC_6 (struct sdio_func*) ;

__attribute__((used)) static
int FUNC_7(struct i2400ms *VAR_3,
     const __le32 *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct sdio_func *VAR_7 = VAR_3->func;
 struct device *VAR_8 = &VAR_7->dev;
 void *VAR_9;

 VAR_6 = -VAR_0;
 VAR_9 = FUNC_2(VAR_2, VAR_1);
 if (VAR_9 == ((void*)0))
  goto error_kzalloc;

 FUNC_3(VAR_9, VAR_4, VAR_5);
 FUNC_4(VAR_7);
 VAR_6 = FUNC_5(VAR_7, 0, VAR_9, VAR_2);
 FUNC_6(VAR_7);

 if (VAR_6 < 0)
  FUNC_0(0, VAR_8, "E: barker error: %d\n", VAR_6);

 FUNC_1(VAR_9);
error_kzalloc:
 return VAR_6;
}
