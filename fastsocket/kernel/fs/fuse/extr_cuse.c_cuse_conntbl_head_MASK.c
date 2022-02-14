
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
typedef int dev_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 struct list_head* VAR_1 ;

__attribute__((used)) static struct list_head *FUNC_2(dev_t VAR_2)
{
 return &VAR_1[(FUNC_0(VAR_2) + FUNC_1(VAR_2)) % VAR_0];
}
