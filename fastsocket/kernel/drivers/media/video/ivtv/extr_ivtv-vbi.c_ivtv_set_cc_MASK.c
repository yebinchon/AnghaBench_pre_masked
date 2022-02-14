
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbi_cc {int * even; int * odd; } ;
struct v4l2_sliced_vbi_data {int field; int line; int * data; int id; } ;
struct ivtv {int v4l2_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ivtv*,int ,int ,int ,struct v4l2_sliced_vbi_data*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct ivtv *VAR_5, int VAR_6, const struct vbi_cc *VAR_7)
{
 struct v4l2_sliced_vbi_data VAR_8;

 if (!(VAR_5->v4l2_cap & VAR_1))
  return;
 VAR_8.id = VAR_2;
 VAR_8.field = 0;
 VAR_8.line = (VAR_6 & 1) ? 21 : 0;
 VAR_8.data[0] = VAR_7->odd[0];
 VAR_8.data[1] = VAR_7->odd[1];
 FUNC_0(VAR_5, VAR_0, VAR_4, VAR_3, &VAR_8);
 VAR_8.field = 1;
 VAR_8.line = (VAR_6 & 2) ? 21 : 0;
 VAR_8.data[0] = VAR_7->even[0];
 VAR_8.data[1] = VAR_7->even[1];
 FUNC_0(VAR_5, VAR_0, VAR_4, VAR_3, &VAR_8);
}
