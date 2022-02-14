
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {void* start_address; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct dentry* FUNC_0 (char*,int,int *,int *,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(void)
{
 struct dentry *VAR_7;
 VAR_7 = FUNC_0("kernel_page_tables", 0600, ((void*)0), ((void*)0),
     &VAR_6);
 if (!VAR_7)
  return -VAR_0;

 return 0;
}
