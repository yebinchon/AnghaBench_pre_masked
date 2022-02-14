
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_tape_obj {int dev; int drive; } ;
struct gendisk {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ide_tape_obj* FUNC_2 (struct gendisk*,int ) ;
 int VAR_0 ;
 struct ide_tape_obj** VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct ide_tape_obj *FUNC_5(struct gendisk *VAR_3, bool VAR_4,
      unsigned int VAR_5)
{
 struct ide_tape_obj *VAR_6 = ((void*)0);

 FUNC_3(&VAR_2);

 if (VAR_4)
  VAR_6 = VAR_1[VAR_5];
 else
  VAR_6 = FUNC_2(VAR_3, VAR_0);

 if (VAR_6) {
  if (FUNC_1(VAR_6->drive))
   VAR_6 = ((void*)0);
  else
   FUNC_0(&VAR_6->dev);
 }

 FUNC_4(&VAR_2);
 return VAR_6;
}
