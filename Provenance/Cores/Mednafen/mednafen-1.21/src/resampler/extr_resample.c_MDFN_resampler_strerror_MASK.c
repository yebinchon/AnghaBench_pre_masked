
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(int VAR_0)
{
   switch (VAR_0)
   {
      case 128:
         return "Success.";
      case 132:
         return "Memory allocation failed.";
      case 131:
         return "Bad resampler state.";
      case 130:
         return "Invalid argument.";
      case 129:
         return "Input and output buffers overlap.";
      default:
         return "Unknown error. Bad error code or strange version mismatch.";
   }
}
