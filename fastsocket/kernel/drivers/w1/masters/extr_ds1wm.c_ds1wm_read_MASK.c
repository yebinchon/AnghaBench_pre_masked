
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1wm_data {int read_byte; int * read_complete; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ds1wm_data*,unsigned char) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct ds1wm_data *VAR_2, unsigned char VAR_3)
{
 FUNC_0(VAR_1);
 VAR_2->read_complete = &VAR_1;

 FUNC_1(VAR_2, VAR_3);
 FUNC_2(&VAR_1, VAR_0);
 VAR_2->read_complete = ((void*)0);

 return VAR_2->read_byte;
}
