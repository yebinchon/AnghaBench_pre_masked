
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct fsp_data* private; } ;
struct fsp_data {unsigned long last_reg; int last_val; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct psmouse*,unsigned long,int*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_2, void *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct fsp_data *VAR_6 = VAR_2->private;
 unsigned long VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_4, 16, &VAR_7) || VAR_7 > 0xff)
  return -VAR_0;

 if (FUNC_0(VAR_2, VAR_7, &VAR_8))
  return -VAR_1;

 VAR_6->last_reg = VAR_7;
 VAR_6->last_val = VAR_8;

 return VAR_5;
}
