
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(
 "\n  \033[1mUSAGE\033[0m\n\n    icfoptimize [OPTION...]\n\n"
 "  \033[1mREQUIRED OPTIONS\033[0m\n\n"
 "    --positive-list : text file contains a list of positive files in format:\n"
 "                      <file name> center-x center-y horizontal-axis-length vertical-axis-length object-roll object-pitch object-yaw \\newline\n"
 "    --acceptance : what percentage of positive examples that we should accept for soft cascading\n"
 "    --classifier-cascade : the model file that we will compute soft cascading thresholds on\n\n"
 "  \033[1mOTHER OPTIONS\033[0m\n\n"
 "    --base-dir : change the base directory so that the program can read images from there\n\n"
 );
 FUNC_0(-1);
}
