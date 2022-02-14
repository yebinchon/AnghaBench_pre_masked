
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pixelformat; int sizeimage; int field; } ;
struct TYPE_10__ {TYPE_3__ pix; } ;
struct TYPE_11__ {int type; TYPE_4__ fmt; } ;
struct common_obj {TYPE_5__ fmt; int memory; } ;
struct TYPE_7__ {scalar_t__ if_type; } ;
struct TYPE_8__ {TYPE_1__ iface; } ;
struct channel_obj {size_t channel_id; TYPE_2__ vpifparams; struct common_obj* common; } ;
struct TYPE_12__ {scalar_t__* numbuffers; int * channel_bufsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 TYPE_6__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct channel_obj *VAR_10)
{
 struct common_obj *VAR_11 = &VAR_10->common[VAR_7];

 FUNC_0(2, VAR_9, "vpif_config_format\n");

 VAR_11->fmt.fmt.pix.field = VAR_1;
 if (VAR_8.numbuffers[VAR_10->channel_id] == 0)
  VAR_11->memory = VAR_3;
 else
  VAR_11->memory = VAR_2;

 VAR_11->fmt.fmt.pix.sizeimage
     = VAR_8.channel_bufsize[VAR_10->channel_id];

 if (VAR_10->vpifparams.iface.if_type == VAR_6)
  VAR_11->fmt.fmt.pix.pixelformat = VAR_4;
 else
  VAR_11->fmt.fmt.pix.pixelformat = VAR_5;
 VAR_11->fmt.type = VAR_0;
}
