
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int* dpcd; int * link_configuration; int lane_count; int link_bw; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct intel_dp *VAR_6)
{
 FUNC_0(VAR_6->link_configuration, 0, VAR_3);
 VAR_6->link_configuration[0] = VAR_6->link_bw;
 VAR_6->link_configuration[1] = VAR_6->lane_count;
 VAR_6->link_configuration[8] = VAR_5;



 if (VAR_6->dpcd[VAR_0] >= 0x11 &&
     (VAR_6->dpcd[VAR_4] & VAR_1)) {
  VAR_6->link_configuration[1] |= VAR_2;
 }
}
