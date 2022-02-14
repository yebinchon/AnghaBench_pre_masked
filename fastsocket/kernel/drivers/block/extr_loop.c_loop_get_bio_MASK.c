
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_bio_list; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (int *) ;

__attribute__((used)) static struct bio *FUNC_1(struct loop_device *VAR_0)
{
 return FUNC_0(&VAR_0->lo_bio_list);
}
