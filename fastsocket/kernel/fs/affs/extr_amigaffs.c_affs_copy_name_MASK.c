
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (int ,unsigned int) ;

int
FUNC_2(unsigned char *VAR_0, struct dentry *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->d_name.len, 30u);

 *VAR_0++ = VAR_2;
 FUNC_0(VAR_0, VAR_1->d_name.name, VAR_2);
 return VAR_2;
}
