
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vps ;
struct vbi_vps {int* data; } ;
struct vbi_info {int wss_payload; struct vbi_vps vps_payload; } ;
struct vbi_cc {int* even; int* odd; } ;
struct v4l2_sliced_vbi_data {scalar_t__ id; int line; scalar_t__ field; int* data; } ;
struct ivtv {int i_flags; struct vbi_info vbi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct vbi_vps*,struct vbi_vps*,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ivtv *VAR_5,
    const struct v4l2_sliced_vbi_data *VAR_6,
    struct vbi_cc *VAR_7, int *VAR_8)
{
 struct vbi_info *VAR_9 = &VAR_5->vbi;

 if (VAR_6->id == VAR_2 && VAR_6->line == 21) {
  if (VAR_6->field) {
   VAR_7->even[0] = VAR_6->data[0];
   VAR_7->even[1] = VAR_6->data[1];
  } else {
   VAR_7->odd[0] = VAR_6->data[0];
   VAR_7->odd[1] = VAR_6->data[1];
  }
  *VAR_8 = 1;
 } else if (VAR_6->id == VAR_3 && VAR_6->line == 16 && VAR_6->field == 0) {
  struct vbi_vps VAR_10;

  VAR_10.data[0] = VAR_6->data[2];
  VAR_10.data[1] = VAR_6->data[8];
  VAR_10.data[2] = VAR_6->data[9];
  VAR_10.data[3] = VAR_6->data[10];
  VAR_10.data[4] = VAR_6->data[11];
  if (FUNC_0(&VAR_10, &VAR_9->vps_payload, sizeof(VAR_10))) {
   VAR_9->vps_payload = VAR_10;
   FUNC_1(VAR_0, &VAR_5->i_flags);
  }
 } else if (VAR_6->id == VAR_4 &&
     VAR_6->line == 23 && VAR_6->field == 0) {
  int VAR_11 = VAR_6->data[0] | VAR_6->data[1] << 8;

  if (VAR_9->wss_payload != VAR_11) {
   VAR_9->wss_payload = VAR_11;
   FUNC_1(VAR_1, &VAR_5->i_flags);
  }
 }
}
