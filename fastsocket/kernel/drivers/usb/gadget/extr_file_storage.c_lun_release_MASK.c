
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_dev {int ref; } ;
struct device {int dummy; } ;


 struct fsg_dev* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1)
{
 struct fsg_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->ref, VAR_0);
}
