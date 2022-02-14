
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int uuid; } ;
struct dm_dirty_log {struct log_c* context; } ;
typedef int region_t ;
typedef int pkg ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct log_c*,int ,int ,char*,int,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct dm_dirty_log *VAR_1,
          region_t VAR_2, int VAR_3)
{
 int VAR_4;
 struct log_c *VAR_5 = VAR_1->context;
 struct {
  region_t r;
  int64_t i;
 } VAR_6;

 VAR_6.r = VAR_2;
 VAR_6.i = (int64_t)VAR_3;

 VAR_4 = FUNC_0(VAR_5, VAR_5->uuid, VAR_0,
     (char *)&VAR_6, sizeof(VAR_6),
     ((void*)0), ((void*)0));





 return;
}
