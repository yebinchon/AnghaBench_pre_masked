
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 () ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct nameidata*,char*) ;
 int FUNC_6 (struct dentry*,char*,scalar_t__) ;

__attribute__((used)) static void *FUNC_7(struct dentry *VAR_3, struct nameidata *VAR_4)
{
 int VAR_5 = 0;
 char *VAR_6 = FUNC_2();

 FUNC_1(VAR_1, "%s n", VAR_3->d_name.name);

 if (!VAR_6)
  VAR_6 = FUNC_0(-VAR_0);
 else {
  VAR_5 = FUNC_6(VAR_3, VAR_6, VAR_2);

  if (VAR_5 < 0) {
   FUNC_3(VAR_6);
   VAR_6 = FUNC_0(VAR_5);
  } else
   VAR_6[FUNC_4(VAR_5, VAR_2-1)] = 0;
 }
 FUNC_5(VAR_4, VAR_6);

 return ((void*)0);
}
