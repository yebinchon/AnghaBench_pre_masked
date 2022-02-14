
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_5__ {int dev; scalar_t__ x_char; TYPE_1__* state; } ;
struct mpsc_port_info {int txr_head; scalar_t__ cache_mgmt; TYPE_2__ port; scalar_t__* txb; int txr_tail; } ;
struct circ_buf {size_t tail; int * buf; int head; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int FUNC_0 (int,int ,int) ;
 scalar_t__ FUNC_1 (int ,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,void*,int,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__*,int *,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct mpsc_port_info*,int,int) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 int FUNC_8 (struct circ_buf*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_11(struct mpsc_port_info *VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_5->port.state->xmit;
 u8 *VAR_7;
 u32 VAR_8;


 while (FUNC_0(VAR_5->txr_head, VAR_5->txr_tail, VAR_2)
   < (VAR_2 - 1)) {
  if (VAR_5->port.x_char) {
   VAR_7 = VAR_5->txb + (VAR_5->txr_head * VAR_1);
   *VAR_7 = VAR_5->port.x_char;
   VAR_5->port.x_char = 0;
   VAR_8 = 1;
  } else if (!FUNC_8(VAR_6)
    && !FUNC_9(&VAR_5->port)) {
   VAR_8 = FUNC_5((u32)VAR_1,
    (u32)FUNC_7(VAR_6));
   VAR_8 = FUNC_5(VAR_8, (u32)FUNC_1(VAR_6->head, VAR_6->tail,
    VAR_3));
   VAR_7 = VAR_5->txb + (VAR_5->txr_head * VAR_1);
   FUNC_4(VAR_7, &VAR_6->buf[VAR_6->tail], VAR_8);
   VAR_6->tail = (VAR_6->tail + VAR_8) & (VAR_3 - 1);

   if (FUNC_7(VAR_6) < VAR_4)
    FUNC_10(&VAR_5->port);
  } else {
   return;
  }

  FUNC_2(VAR_5->port.dev, (void *)VAR_7, VAR_1,
    VAR_0);





  FUNC_6(VAR_5, VAR_8, 1);


  VAR_5->txr_head = (VAR_5->txr_head + 1) & (VAR_2 - 1);
 }
}
