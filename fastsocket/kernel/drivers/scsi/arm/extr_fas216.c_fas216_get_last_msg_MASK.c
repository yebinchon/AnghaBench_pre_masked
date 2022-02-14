
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct message {int fifo; int* msg; } ;
struct TYPE_5__ {int msgs; } ;
struct TYPE_6__ {TYPE_1__ scsi; } ;
typedef TYPE_2__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*,unsigned short,int) ;
 struct message* FUNC_1 (int *,int ) ;

__attribute__((used)) static inline unsigned short
FUNC_2(FAS216_Info *VAR_3, int VAR_4)
{
 unsigned short VAR_5 = VAR_2;
 struct message *VAR_6;
 int VAR_7 = 0;

 while ((VAR_6 = FUNC_1(&VAR_3->scsi.msgs, VAR_7++)) != ((void*)0)) {
  if (VAR_4 >= VAR_6->fifo)
   break;
 }

 if (VAR_6) {
  if (VAR_6->msg[0] == VAR_0)
   VAR_5 = VAR_0 | VAR_6->msg[2] << 8;
  else
   VAR_5 = VAR_6->msg[0];
 }

 FUNC_0(VAR_3, VAR_1,
  "Message: %04x found at position %02x\n", VAR_5, VAR_4);

 return VAR_5;
}
