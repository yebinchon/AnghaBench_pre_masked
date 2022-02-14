
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OMX_COMMANDTYPE ;


 size_t FUNC_0 (int,int ,int) ;
 scalar_t__ FUNC_1 (char const**) ;

const char *FUNC_2(OMX_COMMANDTYPE VAR_0)
{
  static const char *VAR_1[] = {
    "OMX_CommandStateSet", "OMX_CommandFlush", "OMX_CommandPortDisable",
    "OMX_CommandPortEnable", "OMX_CommandMarkBuffer", "OMX_Command unknown"
  };

  return VAR_1[FUNC_0((int)VAR_0, 0, (int)FUNC_1(VAR_1)-1)];
}
