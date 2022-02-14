
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_1)
{
   if (VAR_1 != ((void*)0)) FUNC_1(VAR_1);

   FUNC_2(VAR_0,
"Usage:\n"
" timepng --assemble <assembly> {files}\n"
"  Read the files into <assembly>, output the count.  Options are ignored.\n"
" timepng --dissemble <assembly> <count> [options]\n"
"  Time <count> files from <assembly>, additional files may not be given.\n"
" Otherwise:\n"
"  Read the files into a temporary file and time the decode\n"
"Transforms:\n"
"  --by-image: read by image with png_read_png\n"
"  --<transform>: implies by-image, use PNG_TRANSFORM_<transform>\n"
"  Otherwise: read by row using png_read_row (to a single row buffer)\n"
                                      );FUNC_2(VAR_0,
"{files}:\n"
"  PNG files to copy into the assembly and time.  Invalid files are skipped\n"
"  with appropriate error messages.  If no files are given the list of files\n"
"  is read from stdin with each file name terminated by a newline\n"
"Output:\n"
"  For --assemble the output is the name of the assembly file followed by the\n"
"  count of the files it contains; the arguments for --dissemble.  Otherwise\n"
"  the output is the total decode time in seconds.\n");

   FUNC_0(99);
}
