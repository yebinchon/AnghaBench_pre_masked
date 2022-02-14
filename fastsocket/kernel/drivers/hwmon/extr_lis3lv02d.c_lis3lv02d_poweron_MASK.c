
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lis3lv02d {scalar_t__ whoami; int (* write ) (struct lis3lv02d*,int ,int ) ;int (* read ) (struct lis3lv02d*,int ,int *) ;int (* init ) (struct lis3lv02d*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct lis3lv02d*) ;
 int FUNC_1 (struct lis3lv02d*,int ,int *) ;
 int FUNC_2 (struct lis3lv02d*,int ,int ) ;

void FUNC_3(struct lis3lv02d *VAR_3)
{
 u8 VAR_4;

 VAR_3->init(VAR_3);






 if (VAR_3->whoami == VAR_2) {
  VAR_3->read(VAR_3, VAR_1, &VAR_4);
  VAR_4 |= VAR_0;
  VAR_3->write(VAR_3, VAR_1, VAR_4);
 }
}
