
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_driver {int dummy; } ;
struct match_count {int count; struct parisc_driver* driver; } ;


 int FUNC_0 (int ,struct match_count*) ;
 int VAR_0 ;

int FUNC_1(struct parisc_driver *VAR_1)
{
 struct match_count VAR_2 = {
  .driver = VAR_1,
  .count = 0,
 };

 FUNC_0(VAR_0, &VAR_2);

 return VAR_2.count;
}
