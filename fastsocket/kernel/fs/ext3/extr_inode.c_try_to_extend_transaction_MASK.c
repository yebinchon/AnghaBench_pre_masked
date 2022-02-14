
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {scalar_t__ h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(handle_t *VAR_1, struct inode *VAR_2)
{
 if (VAR_1->h_buffer_credits > VAR_0)
  return 0;
 if (!FUNC_1(VAR_1, FUNC_0(VAR_2)))
  return 0;
 return 1;
}
