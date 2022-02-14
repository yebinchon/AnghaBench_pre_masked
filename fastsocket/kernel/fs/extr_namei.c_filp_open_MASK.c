
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filename {char const* name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct file* FUNC_0 (int ,struct filename*,int,int,int ) ;

struct file *FUNC_1(const char *VAR_1, int VAR_2, int VAR_3)
{
 struct filename VAR_4 = { .name = VAR_1 };

 return FUNC_0(VAR_0, &VAR_4, VAR_2, VAR_3, 0);
}
