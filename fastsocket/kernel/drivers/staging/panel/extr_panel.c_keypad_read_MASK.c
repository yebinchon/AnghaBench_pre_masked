
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; } ;
typedef int ssize_t ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_9,
      char *VAR_10, size_t VAR_11, loff_t *VAR_12)
{

 unsigned VAR_13 = *VAR_12;
 char *VAR_14 = VAR_10;

 if (VAR_6 == 0) {
  if (VAR_9->f_flags & VAR_3)
   return -VAR_0;

  FUNC_0(&VAR_7);
  if (FUNC_2(VAR_4))
   return -VAR_1;
 }

 for (; VAR_11-- > 0 && (VAR_6 > 0); ++VAR_13, ++VAR_14, --VAR_6) {
  FUNC_1(VAR_5[VAR_8], VAR_14);
  VAR_8 = (VAR_8 + 1) % VAR_2;
 }
 *VAR_12 = VAR_13;

 return VAR_14 - VAR_10;
}
