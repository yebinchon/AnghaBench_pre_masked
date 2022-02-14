
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pixelformat; int sizeimage; int field; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct TYPE_7__ {int type; TYPE_2__ fmt; } ;
struct common_obj {TYPE_3__ fmt; int memory; } ;
struct channel_obj {size_t channel_id; struct common_obj* common; } ;
struct TYPE_8__ {scalar_t__* numbuffers; int * channel_bufsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static void FUNC_0(struct channel_obj *VAR_7)
{
 struct common_obj *VAR_8 = &VAR_7->common[VAR_5];

 VAR_8->fmt.fmt.pix.field = VAR_1;
 if (VAR_6.numbuffers[VAR_7->channel_id] == 0)
  VAR_8->memory = VAR_3;
 else
  VAR_8->memory = VAR_2;

 VAR_8->fmt.fmt.pix.sizeimage =
   VAR_6.channel_bufsize[VAR_7->channel_id];
 VAR_8->fmt.fmt.pix.pixelformat = VAR_4;
 VAR_8->fmt.type = VAR_0;
}
