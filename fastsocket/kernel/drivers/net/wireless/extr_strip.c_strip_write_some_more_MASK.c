
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_1__* ops; struct strip* disc_data; } ;
struct strip {scalar_t__ magic; scalar_t__ tx_left; int tx_head; int tx_sbytes; int dev; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,int,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct strip*) ;
 int FUNC_3 (struct tty_struct*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2)
{
 struct strip *VAR_3 = VAR_2->disc_data;


 if (!VAR_3 || VAR_3->magic != VAR_0 ||
     !FUNC_1(VAR_3->dev))
  return;

 if (VAR_3->tx_left > 0) {
  int VAR_4 =
      VAR_2->ops->write(VAR_2, VAR_3->tx_head,
          VAR_3->tx_left);
  VAR_3->tx_left -= VAR_4;
  VAR_3->tx_head += VAR_4;



 } else {

  FUNC_0(VAR_1, &VAR_2->flags);
  FUNC_2(VAR_3);
 }
}
