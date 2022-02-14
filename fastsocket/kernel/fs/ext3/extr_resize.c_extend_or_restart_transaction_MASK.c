
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct buffer_head {int dummy; } ;
struct TYPE_6__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(handle_t *VAR_1, int VAR_2,
      struct buffer_head *VAR_3)
{
 int VAR_4;

 if (VAR_1->h_buffer_credits >= VAR_2)
  return 0;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4) {
  VAR_4 = FUNC_2(VAR_1, VAR_0);
  if (VAR_4)
   return VAR_4;
  VAR_4 = FUNC_1(VAR_1, VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
