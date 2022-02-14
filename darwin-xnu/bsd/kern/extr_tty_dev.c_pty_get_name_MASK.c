
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_dev_t {int (* name ) (int ,char*,size_t) ;} ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 struct tty_dev_t* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_3(dev_t VAR_0, char *VAR_1, size_t VAR_2)
{
 struct tty_dev_t *VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 && VAR_3->name) {
  return VAR_3->name(FUNC_0(VAR_0), VAR_1, VAR_2);
 }
 return 0;
}
