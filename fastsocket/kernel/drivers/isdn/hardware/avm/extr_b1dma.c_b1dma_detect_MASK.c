
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int csr; int port; } ;
typedef TYPE_1__ avmcard ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(avmcard *VAR_6)
{
 FUNC_1(VAR_6, 0, VAR_1);
 FUNC_2(10);
 FUNC_1(VAR_6, 0x0f000000, VAR_1);
 FUNC_2(10);
 FUNC_1(VAR_6, 0, VAR_1);
 FUNC_2(42);

 FUNC_1(VAR_6, 0, VAR_2);
 FUNC_1(VAR_6, 0, VAR_4);
 VAR_6->csr = 0x0;
 FUNC_1(VAR_6, VAR_6->csr, VAR_0);

 if (FUNC_0(VAR_6, VAR_1) != 0x000000E6)
  return 1;

 FUNC_1(VAR_6, 0xffffffff, VAR_3);
 FUNC_1(VAR_6, 0xffffffff, VAR_5);
 if ( FUNC_0(VAR_6, VAR_3) != 0xfffffffc
     || FUNC_0(VAR_6, VAR_5) != 0xfffffffc)
  return 2;

 FUNC_1(VAR_6, 0x0, VAR_3);
 FUNC_1(VAR_6, 0x0, VAR_5);
 if ( FUNC_0(VAR_6, VAR_3) != 0x0
     || FUNC_0(VAR_6, VAR_5) != 0x0)
  return 3;

 FUNC_4(VAR_6->port, 0x10, 0x00);
 FUNC_4(VAR_6->port, 0x07, 0x00);

 FUNC_4(VAR_6->port, 0x02, 0x02);
 FUNC_4(VAR_6->port, 0x03, 0x02);

 if ( (FUNC_3(VAR_6->port, 0x02) & 0xFE) != 0x02
     || FUNC_3(VAR_6->port, 0x3) != 0x03)
  return 4;

 FUNC_4(VAR_6->port, 0x02, 0x00);
 FUNC_4(VAR_6->port, 0x03, 0x00);

 if ( (FUNC_3(VAR_6->port, 0x02) & 0xFE) != 0x00
     || FUNC_3(VAR_6->port, 0x3) != 0x01)
  return 5;

 return 0;
}
