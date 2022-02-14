
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_sliced_vbi_data {int line; int * data; scalar_t__ field; int id; } ;
struct TYPE_3__ {int * data; } ;
struct TYPE_4__ {TYPE_1__ vps_payload; } ;
struct ivtv {int v4l2_cap; TYPE_2__ vbi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ivtv*,int ,int ,int ,struct v4l2_sliced_vbi_data*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct ivtv *VAR_5, int VAR_6)
{
 struct v4l2_sliced_vbi_data VAR_7;

 if (!(VAR_5->v4l2_cap & VAR_1))
  return;
 VAR_7.id = VAR_2;
 VAR_7.field = 0;
 VAR_7.line = VAR_6 ? 16 : 0;
 VAR_7.data[2] = VAR_5->vbi.vps_payload.data[0];
 VAR_7.data[8] = VAR_5->vbi.vps_payload.data[1];
 VAR_7.data[9] = VAR_5->vbi.vps_payload.data[2];
 VAR_7.data[10] = VAR_5->vbi.vps_payload.data[3];
 VAR_7.data[11] = VAR_5->vbi.vps_payload.data[4];
 FUNC_0(VAR_5, VAR_0, VAR_4, VAR_3, &VAR_7);
}
