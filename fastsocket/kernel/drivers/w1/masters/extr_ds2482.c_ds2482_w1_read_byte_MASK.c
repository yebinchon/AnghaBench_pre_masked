
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds2482_w1_chan {int channel; struct ds2482_data* pdev; } ;
struct ds2482_data {int w1_count; int access_lock; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ds2482_data*,int ) ;
 int FUNC_1 (struct ds2482_data*,int ) ;
 int FUNC_2 (struct ds2482_data*,int ) ;
 int FUNC_3 (struct ds2482_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static u8 FUNC_7(void *VAR_2)
{
 struct ds2482_w1_chan *VAR_3 = VAR_2;
 struct ds2482_data *VAR_4 = VAR_3->pdev;
 int VAR_5;

 FUNC_5(&VAR_4->access_lock);


 FUNC_3(VAR_4);
 if (VAR_4->w1_count > 1)
  FUNC_2(VAR_4, VAR_3->channel);


 FUNC_1(VAR_4, VAR_0);


 FUNC_3(VAR_4);


 FUNC_0(VAR_4, VAR_1);


 VAR_5 = FUNC_4(VAR_4->client);

 FUNC_6(&VAR_4->access_lock);

 return VAR_5;
}
