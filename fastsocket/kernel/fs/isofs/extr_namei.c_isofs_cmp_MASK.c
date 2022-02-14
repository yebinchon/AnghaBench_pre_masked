
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {char const* name; int len; } ;
struct TYPE_4__ {int len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_op; } ;
struct TYPE_3__ {int (* d_compare ) (struct dentry*,TYPE_2__*,struct qstr*) ;} ;


 int FUNC_0 (struct dentry*,TYPE_2__*,struct qstr*) ;

__attribute__((used)) static int
FUNC_1(struct dentry *VAR_0, const char *VAR_1, int VAR_2)
{
 struct qstr VAR_3;

 if (!VAR_1)
  return 1;


 if (VAR_2 == 1) {

  if (VAR_1[0] == 0) {
   if (!VAR_0->d_name.len)
    return 0;
   VAR_1 = ".";
  } else if (VAR_1[0] == 1) {
   VAR_1 = "..";
   VAR_2 = 2;
  }
 }

 VAR_3.name = VAR_1;
 VAR_3.len = VAR_2;
 return VAR_0->d_op->d_compare(VAR_0, &VAR_0->d_name, &VAR_3);
}
