
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned long data; scalar_t__ expires; int function; } ;
struct sixpack {TYPE_3__ resync_t; TYPE_2__* tty; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* write ) (TYPE_2__*,unsigned char*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_3 (struct sixpack*,int ) ;

__attribute__((used)) static inline int FUNC_4(struct sixpack *VAR_4)
{
 unsigned char VAR_5 = 0xe8;

 FUNC_3(VAR_4, VAR_1);

 VAR_4->tty->ops->write(VAR_4->tty, &VAR_5, 1);

 FUNC_1(&VAR_4->resync_t);
 VAR_4->resync_t.data = (unsigned long) VAR_4;
 VAR_4->resync_t.function = VAR_3;
 VAR_4->resync_t.expires = VAR_2 + VAR_0;
 FUNC_0(&VAR_4->resync_t);

 return 0;
}
