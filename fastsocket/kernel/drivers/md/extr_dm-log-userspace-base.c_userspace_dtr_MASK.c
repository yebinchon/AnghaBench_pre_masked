
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {struct log_c* usr_argv_str; scalar_t__ log_dev; int ti; int luid; int uuid; } ;
struct dm_dirty_log {struct log_c* context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct log_c*) ;

__attribute__((used)) static void FUNC_3(struct dm_dirty_log *VAR_1)
{
 struct log_c *VAR_2 = VAR_1->context;

 (void) FUNC_0(VAR_2->uuid, VAR_2->luid, VAR_0,
     ((void*)0), 0,
     ((void*)0), ((void*)0));

 if (VAR_2->log_dev)
  FUNC_1(VAR_2->ti, VAR_2->log_dev);

 FUNC_2(VAR_2->usr_argv_str);
 FUNC_2(VAR_2);

 return;
}
