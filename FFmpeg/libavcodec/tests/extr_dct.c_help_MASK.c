
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(void)
{
    FUNC_0("dct-test [-i] [<test-number>] [<bits>]\n"
           "test-number 0 -> test with random matrixes\n"
           "            1 -> test with random sparse matrixes\n"
           "            2 -> do 3. test from MPEG-4 std\n"
           "bits        Number of time domain bits to use, 8 is default\n"
           "-i          test IDCT implementations\n"
           "-4          test IDCT248 implementations\n"
           "-t          speed test\n");
}
