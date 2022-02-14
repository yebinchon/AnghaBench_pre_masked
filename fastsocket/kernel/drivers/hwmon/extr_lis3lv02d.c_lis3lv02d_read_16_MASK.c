
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lis3lv02d {int (* read ) (struct lis3lv02d*,int,int*) ;} ;
typedef int s16 ;


 int FUNC_0 (struct lis3lv02d*,int,int*) ;
 int FUNC_1 (struct lis3lv02d*,int,int*) ;

__attribute__((used)) static s16 FUNC_2(struct lis3lv02d *VAR_0, int VAR_1)
{
 u8 VAR_2, VAR_3;

 VAR_0->read(VAR_0, VAR_1 - 1, &VAR_2);
 VAR_0->read(VAR_0, VAR_1, &VAR_3);

 return (s16)((VAR_3 << 8) | VAR_2);
}
