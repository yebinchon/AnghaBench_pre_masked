
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lis3lv02d {int (* read ) (struct lis3lv02d*,int ,int *) ;int (* write ) (struct lis3lv02d*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lis3lv02d*,int ,int *) ;
 int FUNC_1 (struct lis3lv02d*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct lis3lv02d *VAR_2)
{
 u8 VAR_3;
 int VAR_4;


 VAR_4 = VAR_2->read(VAR_2, VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 |= VAR_0;
 return VAR_2->write(VAR_2, VAR_1, VAR_3);
}
