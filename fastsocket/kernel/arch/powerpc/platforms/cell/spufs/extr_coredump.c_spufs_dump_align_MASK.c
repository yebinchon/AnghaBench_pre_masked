
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct file*,char*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, char *VAR_2, loff_t VAR_3,
       loff_t *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1((loff_t)VAR_0, VAR_3 - *VAR_4);
 FUNC_0(VAR_2, 0, VAR_6);

 VAR_5 = 0;
 while (VAR_5 == 0 && VAR_3 > *VAR_4) {
  VAR_6 = FUNC_1((loff_t)VAR_0, VAR_3 - *VAR_4);
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_6, VAR_4);
 }

 return VAR_5;
}
