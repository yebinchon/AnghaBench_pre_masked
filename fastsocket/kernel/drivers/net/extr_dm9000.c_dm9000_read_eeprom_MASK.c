
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int flags; int addr_lock; int lock; } ;
typedef TYPE_1__ board_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(board_info_t *VAR_6, int VAR_7, u8 *VAR_8)
{
 unsigned long VAR_9;

 if (VAR_6->flags & VAR_4) {
  VAR_8[0] = 0xff;
  VAR_8[1] = 0xff;
  return;
 }

 FUNC_4(&VAR_6->addr_lock);

 FUNC_6(&VAR_6->lock, VAR_9);

 FUNC_2(VAR_6, VAR_0, VAR_7);
 FUNC_2(VAR_6, VAR_1, VAR_5);

 FUNC_7(&VAR_6->lock, VAR_9);

 FUNC_0(VAR_6);


 FUNC_3(1);

 FUNC_6(&VAR_6->lock, VAR_9);

 FUNC_2(VAR_6, VAR_1, 0x0);

 VAR_8[0] = FUNC_1(VAR_6, VAR_3);
 VAR_8[1] = FUNC_1(VAR_6, VAR_2);

 FUNC_7(&VAR_6->lock, VAR_9);

 FUNC_5(&VAR_6->addr_lock);
}
