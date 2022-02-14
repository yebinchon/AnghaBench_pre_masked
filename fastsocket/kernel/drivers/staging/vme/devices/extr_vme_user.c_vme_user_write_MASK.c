
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {TYPE_2__* f_dentry; } ;
typedef scalar_t__ ssize_t ;
typedef size_t loff_t ;
struct TYPE_6__ {int sem; int resource; } ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int i_rdev; } ;


 scalar_t__ VAR_0 ;

 unsigned int FUNC_0 (int ) ;

 scalar_t__ FUNC_1 (unsigned int,char const*,size_t,size_t*) ;
 int FUNC_2 (int *) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_3 (unsigned int,char const*,size_t,size_t*) ;
 int* VAR_2 ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct file *VAR_3, const char *VAR_4, size_t VAR_5,
    loff_t *VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_3->f_dentry->d_inode->i_rdev);
 ssize_t VAR_8;
 size_t VAR_9;
 size_t VAR_10;

 FUNC_2(&VAR_1[VAR_7].sem);

 VAR_9 = FUNC_5(VAR_1[VAR_7].resource);


 if ((*VAR_6 < 0) || (*VAR_6 > (VAR_9 - 1))) {
  FUNC_4(&VAR_1[VAR_7].sem);
  return 0;
 }


 if (*VAR_6 + VAR_5 > VAR_9)
  VAR_10 = VAR_9 - *VAR_6;
 else
  VAR_10 = VAR_5;

 switch (VAR_2[VAR_7]){
 case 129:
  VAR_8 = FUNC_3(VAR_7, VAR_4, VAR_10, VAR_6);
  break;
 case 128:
  VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_10, VAR_6);
  break;
 default:
  VAR_8 = -VAR_0;
 }

 FUNC_4(&VAR_1[VAR_7].sem);

 if (VAR_8 > 0)
  *VAR_6 += VAR_8;

 return VAR_8;
}
