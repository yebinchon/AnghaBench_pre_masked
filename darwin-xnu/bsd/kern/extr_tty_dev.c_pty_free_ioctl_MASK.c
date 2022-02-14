
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_dev_t {int (* free ) (int ,int) ;} ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 struct tty_dev_t* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(dev_t VAR_0, int VAR_1)
{
 struct tty_dev_t *VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 && VAR_2->free) {
  return VAR_2->free(FUNC_0(VAR_0), VAR_1);
 }
 return 0;
}
