
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds2482_w1_chan {int channel; struct ds2482_data* pdev; } ;
struct ds2482_data {int w1_count; int access_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ds2482_data*,int ,int) ;
 int FUNC_1 (struct ds2482_data*,int ) ;
 int FUNC_2 (struct ds2482_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u8 FUNC_5(void *VAR_2, u8 VAR_3)
{
 struct ds2482_w1_chan *VAR_4 = VAR_2;
 struct ds2482_data *VAR_5 = VAR_4->pdev;
 int VAR_6 = -1;

 FUNC_3(&VAR_5->access_lock);


 FUNC_2(VAR_5);
 if (VAR_5->w1_count > 1)
  FUNC_1(VAR_5, VAR_4->channel);


 if (!FUNC_0(VAR_5, VAR_0,
      VAR_3 ? 0xFF : 0))
  VAR_6 = FUNC_2(VAR_5);

 FUNC_4(&VAR_5->access_lock);

 return (VAR_6 & VAR_1) ? 1 : 0;
}
