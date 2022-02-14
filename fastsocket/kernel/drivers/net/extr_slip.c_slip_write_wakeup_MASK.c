
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; int flags; struct slip* disc_data; } ;
struct slip {scalar_t__ magic; scalar_t__ xleft; int xhead; int tx_packets; int dev; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,int,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct slip*) ;
 int FUNC_3 (struct tty_struct*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2)
{
 int VAR_3;
 struct slip *VAR_4 = VAR_2->disc_data;


 if (!VAR_4 || VAR_4->magic != VAR_0 || !FUNC_1(VAR_4->dev))
  return;

 if (VAR_4->xleft <= 0) {


  VAR_4->tx_packets++;
  FUNC_0(VAR_1, &VAR_2->flags);
  FUNC_2(VAR_4);
  return;
 }

 VAR_3 = VAR_2->ops->write(VAR_2, VAR_4->xhead, VAR_4->xleft);
 VAR_4->xleft -= VAR_3;
 VAR_4->xhead += VAR_3;
}
