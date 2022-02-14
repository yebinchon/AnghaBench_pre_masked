
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_dirent {unsigned char* base; int mask; int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char**,int ,int ) ;

__attribute__((used)) static unsigned char *FUNC_2(const struct nubus_dirent *VAR_0)
{
 unsigned char *VAR_1 = VAR_0->base;


 FUNC_1(&VAR_1, FUNC_0(VAR_0->data), VAR_0->mask);

 return VAR_1;
}
