
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_state {int dummy; } ;
struct fscache_object {scalar_t__ oob_event_mask; int debug_id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct fscache_object*) ;
 struct fscache_state const* FUNC_2 (int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_3(struct fscache_object *VAR_1,
        int VAR_2)
{
 FUNC_0("{OBJ%x},%d", VAR_1->debug_id, VAR_2);

 VAR_1->oob_event_mask = 0;
 FUNC_1(VAR_1);
 return FUNC_2(VAR_0);
}
