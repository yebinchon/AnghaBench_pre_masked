
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(char *VAR_3)
{
   FUNC_0(VAR_2, "Display camera output to display, and optionally saves an uncompressed YUV420 or RGB file \n\n");
   FUNC_0(VAR_2, "NOTE: High resolutions and/or frame rates may exceed the bandwidth of the system due\n");
   FUNC_0(VAR_2, "to the large amounts of data being moved to the SD card. This will result in undefined\n");
   FUNC_0(VAR_2, "results in the subsequent file.\n");
   FUNC_0(VAR_2, "The single raw file produced contains all the images. Each image in the files will be of size\n");
   FUNC_0(VAR_2, "width*height*1.5 for YUV or width*height*3 for RGB, unless width and/or height are not divisible by 16.");
   FUNC_0(VAR_2, "Use the image size displayed during the run (in verbose mode) for an accurate value\n");

   FUNC_0(VAR_2, "The Linux split command can be used to split up the file to individual frames\n");

   FUNC_0(VAR_2, "\nusage: %s [options]\n\n", VAR_3);

   FUNC_0(VAR_2, "Image parameter commands\n\n");

   FUNC_1(VAR_0, VAR_1);

   FUNC_0(VAR_2, "\n");

   return;
}
