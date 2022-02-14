
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct fsp_data* private; } ;
struct fsp_data {int flags; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_0(struct psmouse *VAR_2, void *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct fsp_data *VAR_6 = VAR_2->private;
 size_t VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  switch (VAR_4[VAR_7]) {
  case 'C':
   VAR_6->flags |= VAR_1;
   break;
  case 'c':
   VAR_6->flags &= ~VAR_1;
   break;
  default:
   return -VAR_0;
  }
 }
 return VAR_5;
}
