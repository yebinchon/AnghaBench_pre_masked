
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const char *FUNC_0(int VAR_2)
{
 static const char *VAR_3[] = {
  "IB_QPS_RESET",
  "IB_QPS_INIT",
  "IB_QPS_RTR",
  "IB_QPS_RTS",
  "IB_QPS_SQD",
  "IB_QPS_SQE",
  "IB_QPS_ERR"
 };
 if (VAR_2 < VAR_1 ||
     VAR_2 > VAR_0)
  return "<invalid IB QP state>";

 VAR_2 -= VAR_1;
 return VAR_3[VAR_2];
}
