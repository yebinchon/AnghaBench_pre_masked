
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {scalar_t__ (* read ) (struct lis3lv02d*,int,int *) ;} ;
typedef int s8 ;
typedef int s16 ;


 scalar_t__ FUNC_0 (struct lis3lv02d*,int,int *) ;

__attribute__((used)) static s16 FUNC_1(struct lis3lv02d *VAR_0, int VAR_1)
{
 s8 VAR_2;
 if (VAR_0->read(VAR_0, VAR_1, &VAR_2) < 0)
  return 0;

 return VAR_2;
}
