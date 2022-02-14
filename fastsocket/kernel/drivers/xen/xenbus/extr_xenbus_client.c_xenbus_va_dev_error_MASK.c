
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct xenbus_device {int nodename; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char*,...) ;
 char* FUNC_2 (struct xenbus_device*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (unsigned int,int ) ;
 unsigned int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,unsigned int,char const*,int ) ;
 scalar_t__ FUNC_7 (int ,char*,char*,char*) ;

__attribute__((used)) static void FUNC_8(struct xenbus_device *VAR_3, int VAR_4,
    const char *VAR_5, va_list VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);


 VAR_9 = FUNC_4(4096, VAR_0);
 if (VAR_9 == ((void*)0))
  goto fail;

 VAR_8 = FUNC_5(VAR_9, "%i ", -VAR_4);
 VAR_7 = FUNC_6(VAR_9+VAR_8, 4096 -VAR_8, VAR_5, VAR_6);

 FUNC_0(VAR_8 + VAR_7 > 4096 -1);

 FUNC_1(&VAR_3->dev, "%s\n", VAR_9);

 VAR_10 = FUNC_2(VAR_3);

 if (VAR_10 == ((void*)0)) {
  FUNC_1(&VAR_3->dev, "failed to write error node for %s (%s)\n",
         VAR_3->nodename, VAR_9);
  goto fail;
 }

 if (FUNC_7(VAR_2, VAR_10, "error", VAR_9) != 0) {
  FUNC_1(&VAR_3->dev, "failed to write error node for %s (%s)\n",
         VAR_3->nodename, VAR_9);
  goto fail;
 }

fail:
 FUNC_3(VAR_9);
 FUNC_3(VAR_10);
}
