
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned int len; scalar_t__ name; } ;
struct dentry {int d_sb; } ;


 int FUNC_0 (char*,unsigned int*) ;
 scalar_t__ FUNC_1 (char*,unsigned int*) ;
 scalar_t__ FUNC_2 (int ,char*,unsigned int,char*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_0, struct qstr *VAR_1, struct qstr *VAR_2)
{
 unsigned VAR_3=VAR_1->len;
 unsigned VAR_4=VAR_2->len;
 FUNC_0((char *)VAR_1->name, &VAR_3);





 if (FUNC_1((char *)VAR_2->name, &VAR_4)) return 1;
 if (FUNC_2(VAR_0->d_sb, (char *)VAR_1->name, VAR_3, (char *)VAR_2->name, VAR_4, 0)) return 1;
 return 0;
}
