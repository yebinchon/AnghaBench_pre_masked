
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {unsigned long powered; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct psmouse*,unsigned long) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_1, void *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct hgpk_data *VAR_5 = VAR_1->private;
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 10, &VAR_6);
 if (VAR_7 || VAR_6 > 1)
  return -VAR_0;

 if (VAR_6 != VAR_5->powered) {




  VAR_7 = FUNC_0(VAR_1, VAR_6);
  if (!VAR_7)
   VAR_5->powered = VAR_6;
 }

 return VAR_7 ? VAR_7 : VAR_4;
}
