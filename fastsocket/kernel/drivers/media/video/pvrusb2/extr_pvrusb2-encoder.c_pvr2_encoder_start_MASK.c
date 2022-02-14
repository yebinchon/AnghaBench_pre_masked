
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {scalar_t__ input_val; int active_stream_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (struct pvr2_hdw*,int ,int,int,...) ;
 int FUNC_1 (struct pvr2_hdw*,int,int) ;

int FUNC_2(struct pvr2_hdw *VAR_3)
{
 int VAR_4;


 FUNC_1(VAR_3, 0x0048, 0xbfffffff);

 FUNC_0(VAR_3,VAR_0,1,
     VAR_3->input_val == VAR_2 ? 1 : 0);

 switch (VAR_3->active_stream_type) {
 case 128:
  VAR_4 = FUNC_0(VAR_3,VAR_1,2,
        0x01,0x14);
  break;
 case 129:
  VAR_4 = FUNC_0(VAR_3,VAR_1,2,
        0,0x13);
  break;
 default:
  VAR_4 = FUNC_0(VAR_3,VAR_1,2,
        0,0x13);
  break;
 }
 return VAR_4;
}
