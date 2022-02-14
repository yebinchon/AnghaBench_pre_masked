
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct i2400m_reset_ctx {int result; int completion; } ;
struct i2400m {int (* bus_reset ) (struct i2400m*,int ) ;int init_mutex; struct i2400m_reset_ctx* reset_ctx; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*,int) ;
 int FUNC_2 (int,struct device*,char*,struct wimax_dev*) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i2400m*,int ) ;
 int FUNC_7 (int *,int) ;
 struct i2400m* FUNC_8 (struct wimax_dev*) ;

__attribute__((used)) static
int FUNC_9(struct wimax_dev *VAR_3)
{
 int VAR_4;
 struct i2400m *VAR_5 = FUNC_8(VAR_3);
 struct device *VAR_6 = FUNC_3(VAR_5);
 struct i2400m_reset_ctx VAR_7 = {
  .completion = FUNC_0(VAR_7.completion),
  .result = 0,
 };

 FUNC_2(4, VAR_6, "(wimax_dev %p)\n", VAR_3);
 FUNC_4(&VAR_5->init_mutex);
 VAR_5->reset_ctx = &VAR_7;
 FUNC_5(&VAR_5->init_mutex);
 VAR_4 = VAR_5->bus_reset(VAR_5, VAR_2);
 if (VAR_4 < 0)
  goto out;
 VAR_4 = FUNC_7(&VAR_7.completion, 4*VAR_1);
 if (VAR_4 == 0)
  VAR_4 = -VAR_0;
 else if (VAR_4 > 0)
  VAR_4 = VAR_7.result;

 FUNC_4(&VAR_5->init_mutex);
 VAR_5->reset_ctx = ((void*)0);
 FUNC_5(&VAR_5->init_mutex);
out:
 FUNC_1(4, VAR_6, "(wimax_dev %p) = %d\n", VAR_3, VAR_4);
 return VAR_4;
}
