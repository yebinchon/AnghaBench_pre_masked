
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_4__ {TYPE_2__* tx_cur; TYPE_2__* tx_bd_base; int flags; } ;
typedef TYPE_1__ ser_info_t ;
struct TYPE_5__ {int status; int length; scalar_t__ buf; } ;
typedef TYPE_2__ QUICC_BD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char const*,int) ;
 int FUNC_1 (void*,unsigned char const*,int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct * VAR_4,
      const unsigned char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = 0;
 ser_info_t *VAR_9 = (ser_info_t *)VAR_4->driver_data;
 volatile QUICC_BD *VAR_10;







 if (FUNC_3(VAR_9, VAR_4->name, "rs_write"))
  return 0;

 if (!VAR_4)
  return 0;

 VAR_10 = VAR_9->tx_cur;

 while (1) {
  VAR_7 = FUNC_2(VAR_6, VAR_2);

  if (VAR_7 <= 0)
   break;

  if (VAR_10->status & VAR_0) {
   VAR_9->flags |= VAR_3;
   break;
  }


  FUNC_1((void *)VAR_10->buf, VAR_5, VAR_7);

  VAR_10->length = VAR_7;
  VAR_10->status |= VAR_0;

  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
  VAR_8 += VAR_7;



  if (VAR_10->status & VAR_1)
   VAR_10 = VAR_9->tx_bd_base;
  else
   VAR_10++;
  VAR_9->tx_cur = (QUICC_BD *)VAR_10;
 }
 return VAR_8;
}
