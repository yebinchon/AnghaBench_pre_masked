
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct faulty_conf* private; } ;
struct faulty_conf {int dummy; } ;


 int FUNC_0 (struct faulty_conf*) ;

__attribute__((used)) static int FUNC_1(struct mddev *VAR_0)
{
 struct faulty_conf *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1);
 VAR_0->private = ((void*)0);
 return 0;
}
