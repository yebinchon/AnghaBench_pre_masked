
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ivtv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ivtv*,char*) ;
 int FUNC_1 (struct ivtv*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ivtv *VAR_2, u32 *VAR_3,
           u32 *VAR_4)
{
 u32 VAR_5[VAR_0];
 int VAR_6;

 FUNC_0(VAR_2, "ivtvfb_get_framebuffer");
 VAR_6 = FUNC_1(VAR_2, VAR_5, VAR_1, 0);
 *VAR_3 = VAR_5[0];
 *VAR_4 = VAR_5[1];
 return VAR_6;
}
