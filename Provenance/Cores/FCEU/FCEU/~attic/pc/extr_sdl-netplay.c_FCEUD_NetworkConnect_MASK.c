
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef int Uint16 ;
struct TYPE_6__ {void* port; } ;
typedef void* TCPsocket ;
typedef TYPE_1__ IPaddress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 void* FUNC_3 (void**) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (void*,int *,int) ;
 int FUNC_8 (void*,int *,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 () ;
 int * VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int VAR_8 ;
 int FUNC_16 (TYPE_1__*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_17(void)
{
 IPaddress VAR_12;

 FUNC_1();

 if(VAR_9==1)
 {
  TCPsocket VAR_13;
  Uint16 VAR_14=VAR_1;

  FUNC_2(&VAR_12,((void*)0),VAR_0);

  VAR_7=FUNC_11(&VAR_14);

  VAR_13=FUNC_6(&VAR_12);
  VAR_5=FUNC_3(&VAR_13);

  FUNC_16(&VAR_12,FUNC_5(VAR_5),sizeof(IPaddress));

  {
   uint8 VAR_15[12];
   uint32 VAR_16=1;

   VAR_8=FUNC_13();

   FUNC_12(VAR_15,VAR_11);
   FUNC_12(VAR_15+4,1);
   FUNC_12(VAR_15+8,VAR_8);

   FUNC_8(VAR_5, VAR_15, 12);


   FUNC_7(VAR_5, VAR_15, 2);
   VAR_3=FUNC_14(VAR_15);
  }
 }
 else
 {
  FUNC_2(&VAR_12,VAR_4,VAR_2);
  VAR_5=FUNC_6(&VAR_12);

  {
   Uint16 VAR_17=VAR_1;
   uint8 VAR_18[12];

   VAR_7=FUNC_11(&VAR_17);


   FUNC_15(VAR_18,VAR_17);
   FUNC_8(VAR_5, VAR_18, 4);


   FUNC_7(VAR_5, VAR_18, 12);
   VAR_3=FUNC_14(VAR_18);
   VAR_8=FUNC_14(VAR_18+8);
  }
  VAR_10=FUNC_0(1);
  FUNC_4(VAR_10,VAR_6);
  FUNC_9(VAR_10,VAR_7);
 }

 VAR_12.port=VAR_3;
 FUNC_10(VAR_7, 0, &VAR_12);
}
