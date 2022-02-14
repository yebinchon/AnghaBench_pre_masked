
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OMX_ERRORTYPE ;


 size_t FUNC_0 (int,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char const**) ;

const char *FUNC_2(OMX_ERRORTYPE VAR_2)
{
  static const char *VAR_3[] = {
    "OMX_ErrorInsufficientResources", "OMX_ErrorUndefined",
    "OMX_ErrorInvalidComponentName", "OMX_ErrorComponentNotFound",
    "OMX_ErrorInvalidComponent", "OMX_ErrorBadParameter",
    "OMX_ErrorNotImplemented", "OMX_ErrorUnderflow",
    "OMX_ErrorOverflow", "OMX_ErrorHardware", "OMX_ErrorInvalidState",
    "OMX_ErrorStreamCorrupt", "OMX_ErrorPortsNotCompatible",
    "OMX_ErrorResourcesLost", "OMX_ErrorNoMore", "OMX_ErrorVersionMismatch",
    "OMX_ErrorNotReady", "OMX_ErrorTimeout", "OMX_ErrorSameState",
    "OMX_ErrorResourcesPreempted", "OMX_ErrorPortUnresponsiveDuringAllocation",
    "OMX_ErrorPortUnresponsiveDuringDeallocation",
    "OMX_ErrorPortUnresponsiveDuringStop", "OMX_ErrorIncorrectStateTransition",
    "OMX_ErrorIncorrectStateOperation", "OMX_ErrorUnsupportedSetting",
    "OMX_ErrorUnsupportedIndex", "OMX_ErrorBadPortIndex",
    "OMX_ErrorPortUnpopulated", "OMX_ErrorComponentSuspended",
    "OMX_ErrorDynamicResourcesUnavailable", "OMX_ErrorMbErrorsInFrame",
    "OMX_ErrorFormatNotDetected", "OMX_ErrorContentPipeOpenFailed",
    "OMX_ErrorContentPipeCreationFailed", "OMX_ErrorSeperateTablesUsed",
    "OMX_ErrorTunnelingUnsupported",
    "OMX_Error unknown"
  };

  if(VAR_2 == VAR_1) return "OMX_ErrorNone";

  VAR_2 -= VAR_0;
  return VAR_3[FUNC_0((int)VAR_2, 0, (int)FUNC_1(VAR_3)-1)];
}
