
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u32 ;
struct TYPE_7__ {unsigned int hpitch; scalar_t__ storage_mode; } ;
struct TYPE_6__ {unsigned int data_sz; } ;
struct TYPE_5__ {scalar_t__ hd_pol; scalar_t__ vd_pol; scalar_t__ fid_pol; } ;
struct vpif_channel_config_params {scalar_t__ capture_format; scalar_t__ ycmux_mode; scalar_t__ frm_fmt; } ;
struct vpif_params {TYPE_3__ video_params; TYPE_2__ params; TYPE_1__ iface; struct vpif_channel_config_params std_info; } ;
struct TYPE_8__ {unsigned int ch_ctrl; unsigned int line_offset; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,unsigned int,scalar_t__) ;
 TYPE_4__* VAR_11 ;

__attribute__((used)) static void FUNC_5(struct vpif_params *VAR_12,
    u8 VAR_13, u8 VAR_14)
{
 const struct vpif_channel_config_params *VAR_15 = &VAR_12->std_info;
 u32 VAR_16, VAR_17, VAR_18;
 u8 VAR_19, VAR_20;
 int VAR_21;

 VAR_19 = VAR_13;
 VAR_20 = VAR_13 + VAR_14;

 for (VAR_21 = VAR_19; VAR_21 < VAR_20; VAR_21++) {
  VAR_18 = VAR_11[VAR_21].ch_ctrl;
  if (VAR_13 < 2)
   VAR_17 = VAR_0;
  else
   VAR_17 = VAR_9;

  FUNC_4(VAR_18, VAR_17, VAR_15->frm_fmt);
  FUNC_4(VAR_18, VAR_8, VAR_15->ycmux_mode);
  FUNC_4(VAR_18, VAR_5,
     VAR_12->video_params.storage_mode);


  FUNC_2(VAR_18, VAR_6);
  FUNC_4(VAR_18, VAR_1, VAR_15->capture_format);

  if (VAR_13 > 1)
   FUNC_3(VAR_18, VAR_10);
  else if (VAR_15->capture_format) {

   FUNC_4(VAR_18, VAR_3,
     VAR_12->iface.fid_pol);
   FUNC_4(VAR_18, VAR_7,
     VAR_12->iface.vd_pol);
   FUNC_4(VAR_18, VAR_4,
     VAR_12->iface.hd_pol);

   VAR_16 = FUNC_0(VAR_18);

   VAR_16 &= ((~(unsigned int)(0x3)) <<
     VAR_2);
   VAR_16 |= ((VAR_12->params.data_sz) <<
           VAR_2);
   FUNC_1(VAR_16, VAR_18);
  }


  FUNC_1((VAR_12->video_params.hpitch),
      VAR_11[VAR_21].line_offset);
 }
}
