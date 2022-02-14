
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ OMX_INDEXTYPE ;
 char* FUNC_0 (int ) ;

const char *FUNC_1(OMX_INDEXTYPE VAR_0)
{
  static const struct {
    const char *string;
    const OMX_INDEXTYPE param;
  } VAR_1[] =
  {
    {"OMX_IndexParamPriorityMgmt", 139},
    {"OMX_IndexParamAudioInit", 152},
    {"OMX_IndexParamImageInit", 145},
    {"OMX_IndexParamVideoInit", 134},
    {"OMX_IndexParamOtherInit", 142},
    {"OMX_IndexParamPortDefinition", 140},
    {"OMX_IndexParamCompBufferSupplier", 147},
    {"OMX_IndexParamAudioPortFormat", 149},
    {"OMX_IndexParamVideoPortFormat", 131},
    {"OMX_IndexParamImagePortFormat", 144},
    {"OMX_IndexParamOtherPortFormat", 141},
    {"OMX_IndexParamAudioPcm", 150},
    {"OMX_IndexParamAudioAac", 153},
    {"OMX_IndexParamAudioMp3", 151},
    {"OMX_IndexParamVideoMpeg2", 133},
    {"OMX_IndexParamVideoMpeg4", 132},
    {"OMX_IndexParamVideoWmv", 128},
    {"OMX_IndexParamVideoRv", 129},
    {"OMX_IndexParamVideoAvc", 137},
    {"OMX_IndexParamVideoH263", 135},
    {"OMX_IndexParamStandardComponentRole", 138},
    {"OMX_IndexParamContentURI", 146},
    {"OMX_IndexParamCommonSensorMode", 148},
    {"OMX_IndexConfigCommonWhiteBalance", 155},
    {"OMX_IndexConfigCommonDigitalZoom", 162},
    {"OMX_IndexConfigCommonExposureValue", 161},
    {"OMX_IndexConfigCapturing", 163},
    {"OMX_IndexAutoPauseAfterCapture", 164},
    {"OMX_IndexConfigCommonRotate", 157},
    {"OMX_IndexConfigCommonMirror", 159},
    {"OMX_IndexConfigCommonScale", 156},
    {"OMX_IndexConfigCommonInputCrop", 160},
    {"OMX_IndexConfigCommonOutputCrop", 158},
    {"OMX_IndexParamNumAvailableStreams", 143},
    {"OMX_IndexParamActiveStream", 154},
    {"OMX_IndexParamVideoBitrate", 136},
    {"OMX_IndexParamVideoProfileLevelQuerySupported", 130},

    {"OMX_IndexParam unknown", (OMX_INDEXTYPE)0}
  };
  const char *VAR_2 = FUNC_0((uint32_t)VAR_0);
  int VAR_3;

  if (VAR_2)
     return VAR_2;

  for(VAR_3 = 0; VAR_1[VAR_3].param &&
      VAR_1[VAR_3].param != VAR_0; VAR_3++);

  return VAR_1[VAR_3].string;
}
