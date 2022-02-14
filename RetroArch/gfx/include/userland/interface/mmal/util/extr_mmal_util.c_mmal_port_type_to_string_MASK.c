
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_PORT_TYPE_T ;







const char* FUNC_0(MMAL_PORT_TYPE_T VAR_0)
{
   const char *VAR_1;

   switch (VAR_0)
   {
   case 129: VAR_1 = "in"; break;
   case 128: VAR_1 = "out"; break;
   case 131: VAR_1 = "clk"; break;
   case 130: VAR_1 = "ctr"; break;
   default: VAR_1 = "invalid"; break;
   }

   return VAR_1;
}
