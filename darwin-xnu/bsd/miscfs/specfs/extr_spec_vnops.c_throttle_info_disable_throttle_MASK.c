
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _throttle_io_info_t {int throttle_disabled; scalar_t__ throttle_is_fusion_with_priority; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct _throttle_io_info_t* VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct _throttle_io_info_t*,int ) ;

void FUNC_2(int VAR_3, boolean_t VAR_4)
{
 struct _throttle_io_info_t *VAR_5;

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  FUNC_0("Illegal devno (%d) passed into throttle_info_disable_throttle()", VAR_3);

 VAR_5 = &VAR_2[VAR_3];


 if (VAR_4) {
  VAR_5->throttle_is_fusion_with_priority = VAR_4;
  FUNC_1(VAR_5, VAR_0);
 }
 VAR_5->throttle_disabled = !VAR_5->throttle_is_fusion_with_priority;
 return;
}
