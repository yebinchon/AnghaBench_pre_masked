
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(
 "\n  \033[1mUSAGE\033[0m\n\n    bbfcreate [OPTION...]\n\n"
 "  \033[1mREQUIRED OPTIONS\033[0m\n\n"
 "    --positive-list : text file contains a list of positive files (cropped and scaled to the same size)\n"
 "    --background-list : text file contains a list of image files that don't contain any target objects\n"
 "    --negative-count : the number of negative examples we should collect from background files to initialize SVM\n"
 "    --working-dir : the directory to save progress and produce result model\n"
 "    --width : the width of positive image\n"
 "    --height : the height of positive image\n\n"
 "  \033[1mOTHER OPTIONS\033[0m\n\n"
 "    --base-dir : change the base directory so that the program can read images from there\n"
 "    --layer : how many layers needed for cascade classifier [DEFAULT TO 24]\n"
 "    --positive-criteria : what's the percentage of positive examples need to pass for the next layer [DEFAULT TO 0.9975]\n"
 "    --negative-criteria : what's the percentage of negative examples need to reject for the next layer [DEFAULT TO 0.5]\n"
 "    --balance : the balance weight for positive examples v.s. negative examples [DEFAULT TO 1.0]\n"
 "    --feature-number : how big our feature pool should be [DEFAULT TO 100 (thus, 100 * 100 = 10000 features)]\n\n"
 );
 FUNC_0(-1);
}
