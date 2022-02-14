
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_c {struct pool* pool; } ;
struct pool {int dummy; } ;
struct dm_target {struct pool_c* private; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct pool*) ;
 int FUNC_2 (unsigned int,char**,struct pool*) ;
 int FUNC_3 (unsigned int,char**,struct pool*) ;
 int FUNC_4 (unsigned int,char**,struct pool*) ;
 int FUNC_5 (unsigned int,char**,struct pool*) ;
 int FUNC_6 (unsigned int,char**,struct pool*) ;
 int FUNC_7 (unsigned int,char**,struct pool*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static int FUNC_9(struct dm_target *VAR_1, unsigned VAR_2, char **VAR_3)
{
 int VAR_4 = -VAR_0;
 struct pool_c *VAR_5 = VAR_1->private;
 struct pool *VAR_6 = VAR_5->pool;

 if (!FUNC_8(VAR_3[0], "create_thin"))
  VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_6);

 else if (!FUNC_8(VAR_3[0], "create_snap"))
  VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_6);

 else if (!FUNC_8(VAR_3[0], "delete"))
  VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_6);

 else if (!FUNC_8(VAR_3[0], "set_transaction_id"))
  VAR_4 = FUNC_7(VAR_2, VAR_3, VAR_6);

 else if (!FUNC_8(VAR_3[0], "reserve_metadata_snap"))
  VAR_4 = FUNC_6(VAR_2, VAR_3, VAR_6);

 else if (!FUNC_8(VAR_3[0], "release_metadata_snap"))
  VAR_4 = FUNC_5(VAR_2, VAR_3, VAR_6);

 else
  FUNC_0("Unrecognised thin pool target message received: %s", VAR_3[0]);

 if (!VAR_4)
  (void) FUNC_1(VAR_6);

 return VAR_4;
}
