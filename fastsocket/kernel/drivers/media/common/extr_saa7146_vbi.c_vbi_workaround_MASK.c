
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_vv {int vbi_wq; } ;
struct TYPE_7__ {int dma_handle; } ;
struct saa7146_dev {int pci; TYPE_2__ d_rps1; TYPE_1__* ext_vv_data; struct saa7146_vv* vv_data; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int state; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (struct saa7146_dev*,int ) ;
 int FUNC_4 (struct saa7146_dev*,int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;
 TYPE_3__* VAR_34 ;
 int * FUNC_7 (int ,int,int*) ;
 int FUNC_8 (int ,int,int *,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct saa7146_dev*,int) ;
 int FUNC_11 (struct saa7146_dev*,int,int) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int VAR_35 ;
 int VAR_36 ;

__attribute__((used)) static int FUNC_14(struct saa7146_dev *VAR_37)
{
 struct saa7146_vv *VAR_38 = VAR_37->vv_data;

 u32 *VAR_39;
 dma_addr_t VAR_40;

 int VAR_41 = 0;
 int VAR_42;

 FUNC_2(VAR_36, VAR_34);

 FUNC_1(("dev:%p\n",VAR_37));






 VAR_39 = FUNC_7(VAR_37->pci, 4096, &VAR_40);
 if (((void*)0) == VAR_39)
  return -VAR_14;


 FUNC_11(VAR_37, VAR_0, VAR_40);
 FUNC_11(VAR_37, VAR_1, VAR_40+VAR_35);
 FUNC_11(VAR_37, VAR_29, VAR_40+4096);
 FUNC_11(VAR_37, VAR_28, VAR_35);
 FUNC_11(VAR_37, VAR_2, 0x0);
 FUNC_11(VAR_37, VAR_27, (2<<16)|((VAR_35)<<0));
 FUNC_11(VAR_37, VAR_26, VAR_15|VAR_21);


 FUNC_5(VAR_12 | (1 << 8) | (VAR_3/4));

 FUNC_5(0xc000008c);

 if ( 0 != (VAR_31 & VAR_37->ext_vv_data->flags)) {
  FUNC_0(("...using port b\n"));
  FUNC_5(VAR_8 | VAR_6 | VAR_9 | VAR_4);
  FUNC_5(VAR_8 | VAR_6 | VAR_9 | VAR_7);



 } else {
  FUNC_0(("...using port a\n"));
  FUNC_5(VAR_8 | VAR_17);
 }

 FUNC_5(VAR_11 | VAR_16);

 FUNC_5(VAR_12 | (1 << 8) | (VAR_3/4));

 FUNC_5(((1728-(VAR_35)) << 7) | VAR_20);

 FUNC_5(VAR_8 | VAR_16);

 FUNC_5(VAR_11 | VAR_16);

 FUNC_5(VAR_12 | (1 << 8) | (VAR_27/4));

 FUNC_5((2 << 16) | (VAR_35));

 FUNC_5(VAR_12 | (1 << 8) | (VAR_3/4));

 FUNC_5((540 << 7) | (5 << 19));

 FUNC_5(VAR_8 | VAR_16);

 FUNC_5(VAR_11 | VAR_16 | VAR_15);

 FUNC_5(VAR_12 | (1 << 8) | (VAR_25/4));
 FUNC_5(VAR_21 | VAR_15);

 FUNC_5(VAR_5);

 FUNC_5(VAR_10);



 for(VAR_42 = 0; VAR_42 < 2; VAR_42++) {


  FUNC_11(VAR_37, VAR_26, VAR_24|VAR_19);

  FUNC_11(VAR_37, VAR_27, (1<<16)|(2<<0));
  FUNC_11(VAR_37, VAR_26, VAR_15|VAR_21);


  FUNC_4(VAR_37,VAR_22);


  FUNC_6(&VAR_38->vbi_wq, &VAR_36);
  VAR_34->state = VAR_32;


  FUNC_11(VAR_37, VAR_30, VAR_37->d_rps1.dma_handle);
  FUNC_11(VAR_37, VAR_25, (VAR_18 | VAR_23));

  FUNC_12();

  FUNC_1(("brs bug workaround %d/1.\n",VAR_42));

  FUNC_9(&VAR_38->vbi_wq, &VAR_36);
  VAR_34->state = VAR_33;


  FUNC_3(VAR_37,VAR_22);


  FUNC_11(VAR_37, VAR_25, VAR_21);

  if(FUNC_13(VAR_34)) {

   FUNC_1(("aborted (rps:0x%08x).\n",FUNC_10(VAR_37,VAR_30)));


   FUNC_11(VAR_37, VAR_25, VAR_23);

   FUNC_8(VAR_37->pci, 4096, VAR_39, VAR_40);
   return -VAR_13;
  }
 }

 FUNC_8(VAR_37->pci, 4096, VAR_39, VAR_40);
 return 0;
}
