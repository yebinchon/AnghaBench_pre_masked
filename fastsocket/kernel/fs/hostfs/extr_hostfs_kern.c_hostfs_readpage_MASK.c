
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (struct page*) ;
 TYPE_1__* FUNC_1 (struct file*) ;
 long long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 char* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (char*,int ,scalar_t__) ;
 int FUNC_8 (int ,long long*,char*,scalar_t__) ;
 int FUNC_9 (struct page*) ;

int FUNC_10(struct file *VAR_2, struct page *VAR_3)
{
 char *VAR_4;
 long long VAR_5;
 int VAR_6 = 0;

 VAR_5 = (long long) VAR_3->index << VAR_0;
 VAR_4 = FUNC_5(VAR_3);
 VAR_6 = FUNC_8(FUNC_1(VAR_2)->fd, &VAR_5, VAR_4,
   VAR_1);
 if (VAR_6 < 0)
  goto out;

 FUNC_7(&VAR_4[VAR_6], 0, VAR_1 - VAR_6);

 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 if (FUNC_2(VAR_3)) FUNC_0(VAR_3);
 VAR_6 = 0;
 out:
 FUNC_6(VAR_3);
 FUNC_9(VAR_3);
 return VAR_6;
}
