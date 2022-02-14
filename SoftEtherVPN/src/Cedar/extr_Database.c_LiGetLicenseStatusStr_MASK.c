
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;
 int * FUNC_0 (char*) ;

wchar_t *FUNC_1(UINT VAR_0)
{
 wchar_t *VAR_1 = FUNC_0("LICENSE_STATUS_OTHERERROR");

 switch (VAR_0)
 {
 case 128:
  VAR_1 = FUNC_0("LICENSE_STATUS_OK");
  break;

 case 132:
  VAR_1 = FUNC_0("LICENSE_STATUS_EXPIRED");
  break;

 case 131:
  VAR_1 = FUNC_0("LICENSE_STATUS_ID_DIFF");
  break;

 case 133:
  VAR_1 = FUNC_0("LICENSE_STATUS_DUP");
  break;

 case 130:
  VAR_1 = FUNC_0("LICENSE_STATUS_INSUFFICIENT");
  break;

 case 135:
  VAR_1 = FUNC_0("LICENSE_STATUS_COMPETITION");
  break;

 case 129:
  VAR_1 = FUNC_0("LICENSE_STATUS_NONSENSE");
  break;

 case 134:
  VAR_1 = FUNC_0("LICENSE_STATUS_CPU");
  break;
 }

 return VAR_1;
}
