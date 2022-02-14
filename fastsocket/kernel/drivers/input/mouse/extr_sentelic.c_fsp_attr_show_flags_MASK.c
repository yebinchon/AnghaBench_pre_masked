
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct fsp_data* private; } ;
struct fsp_data {int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char) ;

__attribute__((used)) static ssize_t FUNC_1(struct psmouse *VAR_1,
     void *VAR_2, char *VAR_3)
{
 struct fsp_data *VAR_4 = VAR_1->private;

 return FUNC_0(VAR_3, "%c\n",
   VAR_4->flags & VAR_0 ? 'C' : 'c');
}
