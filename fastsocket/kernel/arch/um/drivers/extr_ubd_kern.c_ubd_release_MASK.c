
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubd {scalar_t__ count; } ;
struct gendisk {struct ubd* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (struct ubd*) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct ubd *VAR_2 = VAR_0->private_data;

 if(--VAR_2->count == 0)
  FUNC_0(VAR_2);
 return 0;
}
