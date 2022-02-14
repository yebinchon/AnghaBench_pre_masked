
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pvr2_hdw {TYPE_1__* hdw_desc; int usb_dev; scalar_t__ state_encoder_runok; int encoder_run_timer; scalar_t__ enc_cur_valid; } ;
struct firmware {unsigned int size; scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ signal_routing_scheme; scalar_t__ flag_skip_cx23416_firmware; } ;


 int FUNC_0 (char const**) ;

 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (void*,scalar_t__,unsigned int) ;
 int FUNC_5 (struct pvr2_hdw*) ;
 int FUNC_6 (struct pvr2_hdw*,int,int) ;
 int FUNC_7 (struct pvr2_hdw*,int,int) ;
 int FUNC_8 (struct pvr2_hdw*,int) ;
 int FUNC_9 (struct pvr2_hdw*,struct firmware const**,char*,int ,char const**) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (struct pvr2_hdw*,int,int) ;
 int FUNC_12 (struct firmware const*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*,scalar_t__) ;
 int FUNC_16 (int ,unsigned int,void*,unsigned int,int*,int ) ;
 unsigned int FUNC_17 (int ,int ) ;

int FUNC_18(struct pvr2_hdw *VAR_10)
{
 const struct firmware *VAR_11 = ((void*)0);
 void *VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;
 int VAR_19 = 0;
 int VAR_20;
 static const char *VAR_21[] = {
  128,
 };

 if (VAR_10->hdw_desc->flag_skip_cx23416_firmware) {
  return 0;
 }

 FUNC_14("pvr2_upload_firmware2");

 VAR_19 = FUNC_9(VAR_10,&VAR_11,"encoder",
       FUNC_0(VAR_21), VAR_21);
 if (VAR_19 < 0) return VAR_19;
 VAR_20 = VAR_19;
 VAR_19 = 0;



 VAR_10->enc_cur_valid = 0;



 FUNC_1(&VAR_10->encoder_run_timer);
 if (VAR_10->state_encoder_runok) {
  VAR_10->state_encoder_runok = 0;
  FUNC_15("state_encoder_runok",VAR_10->state_encoder_runok);
 }


 VAR_19 |= FUNC_11(VAR_10, 0x0048, 0xffffffff);
 VAR_19 |= FUNC_6(VAR_10,0xffffffff,0x00000088);
 VAR_19 |= FUNC_7(VAR_10,0xffffffff,0x00000008);
 VAR_19 |= FUNC_5(VAR_10);
 VAR_19 |= FUNC_11(VAR_10, 0xa064, 0x00000000);
 VAR_19 |= FUNC_6(VAR_10,0xffffffff,0x00000408);
 VAR_19 |= FUNC_7(VAR_10,0xffffffff,0x00000008);
 VAR_19 |= FUNC_11(VAR_10, 0x9058, 0xffffffed);
 VAR_19 |= FUNC_11(VAR_10, 0x9054, 0xfffffffd);
 VAR_19 |= FUNC_11(VAR_10, 0x07f8, 0x80000800);
 VAR_19 |= FUNC_11(VAR_10, 0x07fc, 0x0000001a);
 VAR_19 |= FUNC_11(VAR_10, 0x0700, 0x00000000);
 VAR_19 |= FUNC_11(VAR_10, 0xaa00, 0x00000000);
 VAR_19 |= FUNC_11(VAR_10, 0xaa04, 0x00057810);
 VAR_19 |= FUNC_11(VAR_10, 0xaa10, 0x00148500);
 VAR_19 |= FUNC_11(VAR_10, 0xaa18, 0x00840000);
 VAR_19 |= FUNC_8(VAR_10,VAR_3);
 VAR_19 |= FUNC_8(VAR_10,VAR_4 | (1 << 8) | (0 << 16));

 if (VAR_19) {
  FUNC_10(VAR_9,
      "firmware2 upload prep failed, ret=%d",VAR_19);
  FUNC_12(VAR_11);
  goto done;
 }



 VAR_14 = VAR_11->size;

 if (VAR_14 % sizeof(u32)) {
  FUNC_10(VAR_9,
      "size of %s firmware"
      " must be a multiple of %zu bytes",
      VAR_21[VAR_20],sizeof(u32));
  FUNC_12(VAR_11);
  VAR_19 = -VAR_0;
  goto done;
 }

 VAR_12 = FUNC_3(VAR_2, VAR_5);
 if (VAR_12 == ((void*)0)){
  FUNC_12(VAR_11);
  FUNC_10(VAR_9,
      "failed to allocate memory for firmware2 upload");
  VAR_19 = -VAR_1;
  goto done;
 }

 VAR_13 = FUNC_17(VAR_10->usb_dev, VAR_7);

 VAR_15 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_14;) {
  VAR_16 = VAR_14 - VAR_15;
  if (VAR_16 > VAR_2) VAR_16 = VAR_2;
  FUNC_4(VAR_12, VAR_11->data + VAR_15, VAR_16);
  for (VAR_17 = 0; VAR_17 < VAR_16/4 ; VAR_17++)
   ((u32 *)VAR_12)[VAR_17] = FUNC_13(((u32 *)VAR_12)[VAR_17]);

  VAR_19 |= FUNC_16(VAR_10->usb_dev, VAR_13, VAR_12,VAR_16,
        &VAR_18, VAR_6);
  VAR_19 |= (VAR_18 != VAR_16);
  if (VAR_19) break;
  VAR_15 += VAR_16;
 }

 FUNC_14("upload of %s : %i / %i ",
         VAR_21[VAR_20],VAR_15,VAR_14);

 FUNC_2(VAR_12);
 FUNC_12(VAR_11);

 if (VAR_19) {
  FUNC_10(VAR_9,
      "firmware2 upload transfer failure");
  goto done;
 }



 VAR_19 |= FUNC_11(VAR_10, 0x9054, 0xffffffff);
 VAR_19 |= FUNC_11(VAR_10, 0x9058, 0xffffffe8);
 VAR_19 |= FUNC_8(VAR_10,VAR_4 | (1 << 8) | (0 << 16));

 if (VAR_19) {
  FUNC_10(VAR_9,
      "firmware2 upload post-proc failure");
 }

 done:
 if (VAR_10->hdw_desc->signal_routing_scheme ==
     VAR_8) {


  FUNC_6(VAR_10,(1 << 11),~0);
 }
 return VAR_19;
}
