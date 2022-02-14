
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_driver {int (* probe ) (struct parisc_device*) ;} ;
struct parisc_device {struct parisc_driver* driver; } ;
struct device {int driver; } ;


 int FUNC_0 (struct parisc_device*) ;
 struct parisc_device* FUNC_1 (struct device*) ;
 struct parisc_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 int VAR_1;
 struct parisc_device *VAR_2 = FUNC_1(VAR_0);
 struct parisc_driver *VAR_3 = FUNC_2(VAR_0->driver);

 VAR_1 = VAR_3->probe(VAR_2);

 if (!VAR_1)
  VAR_2->driver = VAR_3;

 return VAR_1;
}
