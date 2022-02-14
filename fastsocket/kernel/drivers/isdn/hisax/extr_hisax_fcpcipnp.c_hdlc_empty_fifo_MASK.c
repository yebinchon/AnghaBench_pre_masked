
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fritz_bcs {scalar_t__ rcvidx; unsigned char* rcvbuf; scalar_t__ channel; struct fritz_adapter* adapter; } ;
struct fritz_adapter {int type; int hw_lock; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,unsigned char*,int) ;
 int FUNC_2 (scalar_t__,unsigned char*,int) ;
 int FUNC_3 (unsigned char,scalar_t__) ;
 int FUNC_4 (unsigned char,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct fritz_bcs *VAR_8, int VAR_9)
{
 struct fritz_adapter *VAR_10 = VAR_8->adapter;
 unsigned char *VAR_11;
 unsigned char VAR_12 = VAR_8->channel ? VAR_4 : VAR_3;

 FUNC_0(0x10, "hdlc_empty_fifo %d", VAR_9);
 if (VAR_8->rcvidx + VAR_9 > VAR_7) {
  FUNC_0(0x10, "hdlc_empty_fifo: incoming packet too large");
  return;
 }
 VAR_11 = VAR_8->rcvbuf + VAR_8->rcvidx;
 VAR_8->rcvidx += VAR_9;
 switch (VAR_10->type) {
 case 130:
  FUNC_5(&VAR_10->hw_lock);
  FUNC_4(VAR_12, VAR_10->io + VAR_5);
  FUNC_2(VAR_10->io + VAR_0 + VAR_6,
       VAR_11, (VAR_9 + 3) / 4);
  FUNC_6(&VAR_10->hw_lock);
  break;
 case 129:
  FUNC_2(VAR_10->io +
       (VAR_8->channel ? VAR_2 : VAR_1),
       VAR_11, (VAR_9 + 3) / 4);
  break;
 case 128:
  FUNC_5(&VAR_10->hw_lock);
  FUNC_3(VAR_12, VAR_10->io + VAR_5);
  FUNC_1(VAR_10->io + VAR_0, VAR_11, VAR_9);
  FUNC_6(&VAR_10->hw_lock);
  break;
 }
}
