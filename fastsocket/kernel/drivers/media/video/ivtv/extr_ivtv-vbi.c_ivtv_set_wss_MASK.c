
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_sliced_vbi_data {int line; int* data; scalar_t__ field; int id; } ;
struct ivtv {int v4l2_cap; int std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ivtv*,int ,int ,int ,struct v4l2_sliced_vbi_data*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct ivtv *VAR_6, int VAR_7, int VAR_8)
{
 struct v4l2_sliced_vbi_data VAR_9;

 if (!(VAR_6->v4l2_cap & VAR_1))
  return;





 if ((VAR_6->std & VAR_3) && !VAR_7) {
  VAR_7 = 1;
  VAR_8 = 0x08;
 }
 VAR_9.id = VAR_2;
 VAR_9.field = 0;
 VAR_9.line = VAR_7 ? 23 : 0;
 VAR_9.data[0] = VAR_8 & 0xff;
 VAR_9.data[1] = (VAR_8 >> 8) & 0xff;
 FUNC_0(VAR_6, VAR_0, VAR_5, VAR_4, &VAR_9);
}
