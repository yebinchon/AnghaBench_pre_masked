
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_state {int dummy; } ;
struct fscache_object {int debug_id; } ;


 int VAR_0 ;
 struct fscache_state const* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct fscache_object*,int ) ;
 struct fscache_state const* FUNC_2 (int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_3(struct fscache_object *VAR_3,
          int VAR_4)
{
 FUNC_0("{OBJ%x},%d", VAR_3->debug_id, VAR_4);

 if (!FUNC_1(VAR_3, VAR_0))
  return VAR_1;
 return FUNC_2(VAR_2);
}
