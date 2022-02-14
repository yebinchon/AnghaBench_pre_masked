
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; scalar_t__ name; } ;
struct dentry {TYPE_1__ d_name; scalar_t__ d_iname; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dentry *VAR_0, struct dentry *VAR_1)
{
 if (FUNC_0(VAR_1)) {
  if (FUNC_0(VAR_0)) {



   FUNC_2(VAR_1->d_name.name, VAR_0->d_name.name);
  } else {




   FUNC_1(VAR_1->d_iname, VAR_0->d_name.name,
     VAR_0->d_name.len + 1);
   VAR_0->d_name.name = VAR_1->d_name.name;
   VAR_1->d_name.name = VAR_1->d_iname;
  }
 } else {
  if (FUNC_0(VAR_0)) {




   FUNC_1(VAR_0->d_iname, VAR_1->d_name.name,
     VAR_1->d_name.len + 1);
   VAR_1->d_name.name = VAR_0->d_name.name;
   VAR_0->d_name.name = VAR_0->d_iname;
  } else {



   FUNC_1(VAR_0->d_iname, VAR_1->d_name.name,
     VAR_1->d_name.len + 1);
   VAR_0->d_name.len = VAR_1->d_name.len;
   return;
  }
 }
 FUNC_2(VAR_0->d_name.len, VAR_1->d_name.len);
}
