
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_extension {int driver; int name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct saa7146_extension* VAR_0)
{
 FUNC_0(("ext:%p\n",VAR_0));
 FUNC_2("saa7146: unregister extension '%s'.\n",VAR_0->name);
 FUNC_1(&VAR_0->driver);
 return 0;
}
