
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h_buffer_credits; int h_ref; int h_lockdep_map; } ;
typedef TYPE_1__ handle_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static handle_t *FUNC_3(int VAR_2)
{
 handle_t *VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->h_buffer_credits = VAR_2;
 VAR_3->h_ref = 1;

 FUNC_1(&VAR_3->h_lockdep_map, "jbd2_handle",
      &VAR_1, 0);

 return VAR_3;
}
