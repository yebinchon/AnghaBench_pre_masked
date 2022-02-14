
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_driver {int (* probe ) (int *) ;} ;
struct device {int driver; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (struct device*) ;
 struct ide_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 ide_drive_t *VAR_2 = FUNC_1(VAR_1);
 struct ide_driver *VAR_3 = FUNC_2(VAR_1->driver);

 return VAR_3->probe ? VAR_3->probe(VAR_2) : -VAR_0;
}
