
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {int recalib_wq; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct psmouse*,int *,int ) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_1, void *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct hgpk_data *VAR_5 = VAR_1->private;
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 10, &VAR_6);
 if (VAR_7 || VAR_6 != 1)
  return -VAR_0;






 FUNC_0(VAR_1, &VAR_5->recalib_wq, 0);
 return VAR_4;
}
