
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {char* iobuf; int recv_bulk_pipe; int send_bulk_pipe; scalar_t__ extra; } ;
struct karma_data {unsigned char* recv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char) ;
 unsigned long VAR_6 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (struct us_data*,int ,unsigned char*,int ,int*) ;

__attribute__((used)) static int FUNC_7(char VAR_7, struct us_data *VAR_8)
{
 int VAR_9, VAR_10;
 unsigned long VAR_11;
 static unsigned char VAR_12 = 1;
 struct karma_data *VAR_13 = (struct karma_data *) VAR_8->extra;

 FUNC_0("karma: sending command %04x\n", VAR_7);
 FUNC_2(VAR_8->iobuf, 0, VAR_3);
 FUNC_1(VAR_8->iobuf, VAR_0, VAR_1);
 VAR_8->iobuf[5] = VAR_7;
 VAR_8->iobuf[6] = VAR_12;

 VAR_11 = VAR_6 + FUNC_3(6000);
 for (;;) {
  VAR_9 = FUNC_6(VAR_8, VAR_8->send_bulk_pipe,
   VAR_8->iobuf, VAR_3, &VAR_10);
  if (VAR_9 != VAR_5)
   goto err;

  VAR_9 = FUNC_6(VAR_8, VAR_8->recv_bulk_pipe,
   VAR_13->recv, VAR_2, &VAR_10);
  if (VAR_9 != VAR_5)
   goto err;

  if (VAR_13->recv[5] == VAR_12)
   break;

  if (FUNC_5(VAR_6, VAR_11))
   goto err;

  VAR_8->iobuf[4] = 0x80;
  VAR_8->iobuf[5] = 0;
  FUNC_4(50);
 }

 VAR_12++;
 if (VAR_12 == 0)
  VAR_12 = 1;

 FUNC_0("karma: sent command %04x\n", VAR_7);
 return 0;
err:
 FUNC_0("karma: command %04x failed\n", VAR_7);
 return VAR_4;
}
