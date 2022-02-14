
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

int FUNC_10(struct file *VAR_3, struct page *VAR_4)
{
 char *VAR_5, *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_7(VAR_4);
 VAR_6 = FUNC_5(VAR_4->mapping->host, 0);
 if (VAR_6 == ((void*)0))
  return -VAR_1;
 VAR_7 = FUNC_4(VAR_6, VAR_5, VAR_2);
 FUNC_6(VAR_6);
 if (VAR_7 == VAR_2)
  VAR_7 = -VAR_0;
 else if (VAR_7 > 0) {
  FUNC_3(VAR_4);
  FUNC_2(VAR_4);
  if (FUNC_1(VAR_4)) FUNC_0(VAR_4);
  VAR_7 = 0;
 }
 FUNC_8(VAR_4);
 FUNC_9(VAR_4);
 return VAR_7;
}
