
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct TYPE_4__ {unsigned long data; void* function; } ;
struct pcnet32_access {int (* read_bcr ) (int ,int) ;int (* write_bcr ) (int ,int,int) ;} ;
struct pcnet32_private {int lock; TYPE_1__ blink_timer; struct pcnet32_access a; } ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int) ;
 struct pcnet32_private* FUNC_4 (struct net_device*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5, u32 VAR_6)
{
 struct pcnet32_private *VAR_7 = FUNC_4(VAR_5);
 struct pcnet32_access *VAR_8 = &VAR_7->a;
 ulong VAR_9 = VAR_5->base_addr;
 unsigned long VAR_10;
 int VAR_11, VAR_12[4];

 if (!VAR_7->blink_timer.function) {
  FUNC_1(&VAR_7->blink_timer);
  VAR_7->blink_timer.function = (void *)VAR_4;
  VAR_7->blink_timer.data = (unsigned long)VAR_5;
 }


 FUNC_6(&VAR_7->lock, VAR_10);
 for (VAR_11 = 4; VAR_11 < 8; VAR_11++) {
  VAR_12[VAR_11 - 4] = VAR_8->read_bcr(VAR_9, VAR_11);
 }
 FUNC_7(&VAR_7->lock, VAR_10);

 FUNC_2(&VAR_7->blink_timer, VAR_3);
 FUNC_5(VAR_2);


 if ((!VAR_6) || (VAR_6 > (u32) (VAR_1 / VAR_0)))
  VAR_6 = (u32) (VAR_1 / VAR_0);

 FUNC_3(VAR_6 * 1000);
 FUNC_0(&VAR_7->blink_timer);


 FUNC_6(&VAR_7->lock, VAR_10);
 for (VAR_11 = 4; VAR_11 < 8; VAR_11++) {
  VAR_8->write_bcr(VAR_9, VAR_11, VAR_12[VAR_11 - 4]);
 }
 FUNC_7(&VAR_7->lock, VAR_10);

 return 0;
}
