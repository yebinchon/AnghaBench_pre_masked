
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {int sliced; int vbi; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
struct TYPE_6__ {int count; int enc_size; int raw_size; int sliced_size; int fpi; void* enc_start; TYPE_2__ in; } ;
struct ivtv {int hw_flags; scalar_t__ is_60hz; TYPE_3__ vbi; int sd_video; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void*,void*,int,...) ;
 int VAR_3 ;
 int FUNC_1 (struct ivtv*,int ,int,void**) ;
 int FUNC_2 (struct ivtv*) ;
 int FUNC_3 (struct ivtv*,int ,int,int,int,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct ivtv *VAR_7)
{
 int VAR_8 = FUNC_2(VAR_7);
 u32 VAR_9[VAR_2];
 int VAR_10;
 int VAR_11;


 FUNC_3(VAR_7, VAR_1, 5, 0xffff , 0, 0, 0, 0);


 if (VAR_8)
  FUNC_4(VAR_7->sd_video, VAR_6, VAR_4, &VAR_7->vbi.in.fmt.vbi);
 else
  FUNC_4(VAR_7->sd_video, VAR_6, VAR_5, &VAR_7->vbi.in.fmt.sliced);






 if (VAR_8) {
  VAR_10 = VAR_7->vbi.count * 2;
 } else {
  VAR_10 = VAR_7->is_60hz ? 24 : 38;
  if (VAR_7->is_60hz && (VAR_7->hw_flags & VAR_3))
   VAR_10 += 2;
 }

 VAR_7->vbi.enc_size = VAR_10 * (VAR_8 ? VAR_7->vbi.raw_size : VAR_7->vbi.sliced_size);



 VAR_9[0] = VAR_8 | 0x02 | (0xbd << 8);


 VAR_9[1] = 1;

 VAR_9[2] = VAR_8 ? 4 : 4 * (VAR_7->vbi.raw_size / VAR_7->vbi.enc_size);







 if (VAR_7->hw_flags & VAR_3) {

  if (VAR_8) {
   VAR_9[3] = 0x20602060;
   VAR_9[4] = 0x30703070;
  } else {
   VAR_9[3] = 0xB0F0B0F0;
   VAR_9[4] = 0xA0E0A0E0;
  }

  VAR_9[5] = VAR_10;

  VAR_9[6] = (VAR_8 ? VAR_7->vbi.raw_size : VAR_7->vbi.sliced_size);
 } else {

  if (VAR_8) {
   VAR_9[3] = 0x25256262;
   VAR_9[4] = 0x387F7F7F;
  } else {
   VAR_9[3] = 0xABABECEC;
   VAR_9[4] = 0xB6F1F1F1;
  }

  VAR_9[5] = VAR_10;

  VAR_9[6] = VAR_7->vbi.enc_size / VAR_10;
 }

 FUNC_0(
  "Setup VBI API header 0x%08x pkts %d buffs %d ln %d sz %d\n",
   VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[5], VAR_9[6]);

 FUNC_1(VAR_7, VAR_0, 7, VAR_9);


 VAR_7->vbi.enc_start = VAR_9[2];
 VAR_7->vbi.fpi = VAR_9[0];
 if (!VAR_7->vbi.fpi)
  VAR_7->vbi.fpi = 1;

 FUNC_0("Setup VBI start 0x%08x frames %d fpi %d\n",
  VAR_7->vbi.enc_start, VAR_9[1], VAR_7->vbi.fpi);



 for (VAR_11 = 2; VAR_11 <= 24; VAR_11++) {
  int VAR_12;

  if (VAR_7->is_60hz) {
   VAR_12 = VAR_11 >= 10 && VAR_11 < 22;
  } else {
   VAR_12 = VAR_11 >= 6 && VAR_11 < 24;
  }
  FUNC_3(VAR_7, VAR_1, 5, VAR_11 - 1,
    VAR_12, 0 , 0, 0);
  FUNC_3(VAR_7, VAR_1, 5, (VAR_11 - 1) | 0x80000000,
    VAR_12, 0, 0, 0);
 }







}
