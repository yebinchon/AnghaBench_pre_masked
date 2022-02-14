
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_10 = 0;

 if ((VAR_6 < VAR_4) ||
     (VAR_6 > VAR_0)) {
  FUNC_0("Bad parameter: rq1_entries");
  VAR_10 = -VAR_5;
 }
 if ((VAR_7 < VAR_4) ||
     (VAR_7 > VAR_1)) {
  FUNC_0("Bad parameter: rq2_entries");
  VAR_10 = -VAR_5;
 }
 if ((VAR_8 < VAR_4) ||
     (VAR_8 > VAR_2)) {
  FUNC_0("Bad parameter: rq3_entries");
  VAR_10 = -VAR_5;
 }
 if ((VAR_9 < VAR_4) ||
     (VAR_9 > VAR_3)) {
  FUNC_0("Bad parameter: sq_entries");
  VAR_10 = -VAR_5;
 }

 return VAR_10;
}
