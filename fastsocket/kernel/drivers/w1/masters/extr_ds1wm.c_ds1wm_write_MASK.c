
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds1wm_data {int * write_complete; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ds1wm_data*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct ds1wm_data *VAR_3, u8 VAR_4)
{
 FUNC_0(VAR_2);
 VAR_3->write_complete = &VAR_2;

 FUNC_1(VAR_3, VAR_0, VAR_4);

 FUNC_2(&VAR_2, VAR_1);
 VAR_3->write_complete = ((void*)0);

 return 0;
}
