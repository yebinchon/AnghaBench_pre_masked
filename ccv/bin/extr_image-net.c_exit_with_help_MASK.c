
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(
 "\n  \033[1mUSAGE\033[0m\n\n    image-net [OPTION...]\n\n"
 "  \033[1mREQUIRED OPTIONS\033[0m\n\n"
 "    --train-list : text file contains a list of image files in format:\n"
 "                      class-label <file name>\\newline\n"
 "    --test-list : text file contains a list of image files in format:\n"
 "                      class-label <file name>\\newline\n"
 "    --working-dir : the directory to save progress and produce result model\n\n"
 "  \033[1mOTHER OPTIONS\033[0m\n\n"
 "    --base-dir : change the base directory so that the program can read images from there\n"
 "    --max-epoch : how many epoch are needed for stochastic gradient descent (an epoch corresponds to go through the full train list) [DEFAULT TO 100]\n"
 "    --iterations : how many iterations are needed for stochastic gradient descent (an iteration corresponds to go through a mini batch) [DEFAULT TO 5000]\n\n"
 );
 FUNC_0(0);
}
